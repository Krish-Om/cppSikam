#include <stdlib.h>
#include <stdio.h>
int n,m;
void takeInput(float set[],int s)
{
    for (int i = 0; i < s; i++)
    {
        scanf("%f", &set[i]);
    }
}

float findMinimum(float x, float y)
{
    if (x < y)
        return x;
    else
        return y;
}
float findMaximum(float x, float y)
{
    if (x > y)
        return x;
    else
        return y;
}

int main()
{
    printf("Enter the size for the setA and SetB:");
    scanf("%d %d", &n, &m);


    float setA[n],setB[m];

    printf("Enter the elements of set A:");
    takeInput(setA,n);
    
    printf("\nEnter the elements of set B:");
    takeInput(setB,m);

    // fuzzy set operations
    printf("Union: ");
    for (int i = 0; i < n; i++)
    {
        printf("%.1f, ", findMaximum(setA[i],setB[i]));
    }
    printf("\n\nIntersection: ");
    for(int i = 0; i < n; i++)
    {
        printf("%.1f, ", findMinimum(setA[i],setB[i]));
    }
    printf("\n\nComplement of A: ");
    for(int i =0;i<n;i++){
        printf("%.1f, ", 1-setA[i]);
    }
    printf("\n\nComplement of B: ");
    for(int i =0;i<m;i++){
        printf("%.1f, ", 1-setB[i]);
    }

    return 0;
}