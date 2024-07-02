#include <stdio.h>
#include <limits.h>  // For INT_MAX

// Function prototypes for clarity and modularity
int union_sets(int set1, int set2);
int intersection_sets(int set1, int set2);
int complement_set(int set, int universal_set);
int difference_sets(int set1, int set2);
int floor_function(float num);
int ceiling_function(float num);
void cartesian_product(int set1, int set2);
int union_bit_sets(int set1, int set2, int num_elements);
int intersection_bit_sets(int set1, int set2, int num_elements);

int main() {
    int choice, set1, set2, num, universal_set, num_elements;
    float real_num;

    // Get user input for set operations
    printf("Enter 1 for Union, 2 for Intersection, 3 for Complement, 4 for Difference:\n");
    printf("Enter 5 for Floor, 6 for Ceiling, 7 for Cartesian Product, 8 for Bitwise Union/Intersection:\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Union: %d\n", union_sets(set1, set2));
            break;
        case 2:
            printf("Intersection: %d\n", intersection_sets(set1, set2));
            break;
        case 3:
            printf("Complement of set1: %d\n", complement_set(set1, universal_set));
            break;
        case 4:
            printf("Difference: %d\n", difference_sets(set1, set2));
            break;
        case 5:
            printf("Floor: %d\n", floor_function(real_num));
            break;
        case 6:
            printf("Ceiling: %d\n", ceiling_function(real_num));
            break;
        case 7:
            printf("Cartesian Product:\n");
            cartesian_product(set1, set2);
            break;
        case 8:
            printf("Union (bitwise): %d\n", union_bit_sets(set1, set2, num_elements));
            printf("Intersection (bitwise): %d\n", intersection_bit_sets(set1, set2, num_elements));
            break;
    }

    return 0;
}

// Function implementations

int union_sets(int set1, int set2) {
    return set1 | set2;  // Bitwise OR for union
}

int intersection_sets(int set1, int set2) {
    return set1 & set2;  // Bitwise AND for intersection
}

int complement_set(int set, int universal_set) {
    return universal_set ^ set;  // Bitwise XOR for complement (relative to universal set)
}

int difference_sets(int set1, int set2) {
    return set1 & (~set2);  // AND with NOT set2 for difference
}

int floor_function(float num) {
    if (num >= 0) {
        return (int)num;  // Cast to int for positive or zero numbers
    } else {
        return (int)num - 1;  // Subtract 1 for negative numbers (rounds down)
    }
}

// Ceiling function
int ceiling_function(float num) {
    if (num > 0) {
        return (int)num + (num - (int)num > 0);  // Add 1 if there's a decimal part
    } else if (num == 0) {
        return 0;  // Ceiling of 0 is 0
    } else {
        return (int)num;  // Ceiling of negative numbers is the number itself (rounds up)
    }
}

// Cartesian product (prints all combinations of elements from two sets)
void cartesian_product(int set1, int set2) {
    int i, j;
    for (i = 0; i < sizeof(int) * 8; i++) {  // Iterate through all bits in sets
        if (set1 & (1 << i)) {  // Check if bit is set in set1
            for (j = 0; j < sizeof(int) * 8; j++) {
                if (set2 & (1 << j)) {  // Check if bit is set in set2
                    printf("(%d, %d)\n", i, j);  // Print the combination
                }
            }
        }
    }
}

// Union using bitwise operations (considering num_elements bits)
int union_bit_sets(int set1, int set2, int num_elements) {
    int mask = (1 << num_elements) - 1;  // Create a mask with num_elements bits set
    return (set1 | set2) & mask;  // Perform bitwise OR and apply the mask
}

// Intersection using bitwise operations (considering num_elements bits)
int intersection_bit_sets(int set1, int set2, int num_elements) {
    int mask = (1 << num_elements) - 1;  // Create a mask with num_elements bits set
    return set1 & set2 & mask;  // Perform bitwise AND and apply the mask
}
