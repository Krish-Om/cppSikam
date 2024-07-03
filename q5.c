#include <stdio.h>

#define Unisize 10

void display(int bitStr[], int s) {
    for (int i = 0; i < s; i++) {
        printf("%d", bitStr[i]);
    }
    printf("\n");
}

void convert(int set[], int s, int bitStr[], int uniSet[], int uniSize) {
    for (int i = 0; i < uniSize; i++) {//outerloop
        bitStr[i] = 0;
        for (int j = 0; j < s; j++) {//innerloop
            if (uniSet[i] == set[j]) {
                bitStr[i] = 1;
                break;
            }
        }
    }
}

void A_U_B(int bitStr1[], int bitStr2[], int result[], int s) {
    for (int i = 0; i < s; i++) {
        result[i] = bitStr1[i] | bitStr2[i];
    }
}

void A_N_B(int bitStr1[], int bitStr2[], int result[], int s) {
    for (int i = 0; i < s; i++) {
        result[i] = bitStr1[i] & bitStr2[i];
    }
}

int main() {
    int set1[Unisize], set2[Unisize];
    int bitStr1[Unisize] = {0};
    int bitStr2[Unisize] = {0};
    int unionResult[Unisize] = {0};
    int intersectRes[Unisize] = {0};
    int N, M;

    int uniSet[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf("Enter the s of set1: ");
    scanf("%d", &N);
    printf("Enter the elements of set1: ");
    for (int i = 0; i < N; i++) {
        scanf("%d", &set1[i]);
    }

    printf("Enter the size of set2: ");
    scanf("%d", &M);
    printf("Enter the elements of set2: ");
    for (int i = 0; i < M; i++) {
        scanf("%d", &set2[i]);
    }

    // Convert sets to bit strings
    convert(set1, N, bitStr1, uniSet, Unisize);
    convert(set2, M, bitStr2, uniSet, Unisize);

    printf("\nBit string for set1: ");
    display(bitStr1, Unisize);

    printf("\nBit string for set2: ");
    display(bitStr2, Unisize);

    // Compute union and A∩B
    A_U_B(bitStr1, bitStr2, unionResult, Unisize);
    A_N_B(bitStr1, bitStr2, intersectRes, Unisize);

    printf("\nUnion of set1 and set2: ");
    display(unionResult, Unisize);

    printf("\nIntersection of set1 and set2: ");
    display(intersectRes, Unisize);

    return 0;
}