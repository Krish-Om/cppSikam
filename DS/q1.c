#include <stdio.h>

#define SIZE 60
int setA[SIZE], setB[SIZE], setC[SIZE];

void takeInput(int set[], int n)
{
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &set[i]);
    }
    set[0] = n; // Store the size of the set at index 0
}
void displaySet(int set[])
{
    int n = set[0];

    printf("\n{");
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", set[i]);
    }
    printf("}\n");
}

int isElementPresent(int s[], int e)
{
    int n = s[0];
    for (int i = 1; i <= n; i++)
    {
        if (s[i] == e)
            return 1;
    }
    return 0;
}

void Union(int x[], int y[])
{
    int n, m;
    n = x[0];
    for (int i = 1; i <= n; i++)
    {
        setC[i] = x[i];
    }
    m = y[0];
    for (int j = 1; j <= m; j++)
    {
        if (!isElementPresent(x, y[j]))
            setC[++n] = y[j];
    }
    setC[0] = n;
    displaySet(setC);
}

void Intersection(int set1[], int set2[])
{
    int n, m = 0;

    n = set1[0];
    for (int i = 1; i <= n; i++)
    {
        if (isElementPresent(set2, set1[i]))
        {
            setC[++m] = set1[i];
        }
    }
    setC[0] = m; // Store the size of the set at index 0

    displaySet(setC);
}

void ComplementOf(int set[])
{
    // Assuming the universal set U is predefined
    int U[SIZE], complement[SIZE];
    printf("Define the universal set U:\n");
    int usize;
    printf("Enter the size of the universal set U:");
    scanf("%d", &usize);
    takeInput(U, usize);

    int complSize = 0;

    for (int i = 1; i <= usize; i++)
    {
        if (!isElementPresent(set, U[i]))
        {
            complement[++complSize] = U[i];
       
        }
    }
    complement[0] = complSize;
    printf("\nComplement of the set is:");
    displaySet(complement);
}

void differenceOfSet(int setX[], int setY[]){
    int diffSet[SIZE],diffSize=0;
    int n = setX[0];
    for(int i =1;i<=n;i++){
        if(!isElementPresent(setY, setX[i])){
            diffSet[++diffSize] = setX[i];
        }
    }
    diffSet[0] = diffSize;
    printf("\nDifference of set is: ");
    displaySet(diffSet);
}

int main()
{

    printf("Enter the size of set A and B:");
    int n, m;
    scanf("%d %d", &n, &m);
    printf("\n");

    printf("Enter the elements of SetA:");
    takeInput(setA, n);
    printf("\n");

    printf("Enter the elements of SetB:");
    takeInput(setB, m);

    printf("\n\n");
    printf("Union of set A and B");
    Union(setA, setB);

    printf("\n\n");
    printf("Intersection of set A and B");
    Intersection(setA, setB);
    printf("\n");

    ComplementOf(setA);

    differenceOfSet(setA, setB);
    return 0;
}