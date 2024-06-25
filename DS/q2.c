#include <stdio.h>
#include <stdlib.h>

int SIZE;
// Function to print a fuzzy set
void printFuzzySet(float set[])
{
    printf("\n{");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%.2f, ", set[i]);
    }
    printf("}\n");
}

void takeInput(float set[])
{
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%f", &set[i]);
    }
}

// Function to find the union of two fuzzy sets
void fuzzyUnion(float setA[], float setB[])
{
    float resultSet[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        if (setA[i] > setB[i])
        {
            resultSet[i] = setA[i];
        }
        else
        {
            resultSet[i] = setB[i];
        }
    }
    printFuzzySet(resultSet);
}

void fuzzyIntersection(float setA[], float setB[])
{
    float resultSet[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        if (setA[i] < setB[i])
        {
            resultSet[i] = setA[i];
        }
        else
        {
            resultSet[i] = setB[i];
        }
    }

    printFuzzySet(resultSet);
}

void fuzzyComplement(float set[])
{
    float resultSet[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        resultSet[i] = 1 - set[i];
    }
    printFuzzySet(resultSet);
}

int main()
{
    printf("Enter the size for the sets:");
    scanf("%d", &SIZE);
    
    printf("Enter the elements of set A:\n");
    float setA[SIZE];
    takeInput(setA);
    printf("\nEnter the elements of set B:\n");
    float setB[SIZE];
    takeInput(setB);

    // fuzzy set operations
    printf("Union: ");
    fuzzyUnion(setA, setB);
    printf("Intersection: ");
    fuzzyIntersection(setA, setB);
    printf("Complement of A: ");
    fuzzyComplement(setA);

    return 0;
}