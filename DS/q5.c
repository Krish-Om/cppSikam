#include <stdio.h>
#include <stdlib.h>
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
    
    for(int i =1 ;i<= n+m;i++){
            if (!isElementPresent(setC, 0))    
            {
                setC[i] = 1;
            }else{
                setC[i]=0;

    }
            }
            
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
            setC[++m] = 1;
        }
        else
        {
            setC[++m] = 0;
        }
    }

    displaySet(setC);
}

void sort(int *arr, int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - 1; j++)
        {
            if (arr[j] > arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
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
    setC[0] = m + n; // Store the length of the set at index 0

    for (int i = 1; i <= setC[0]; i++)
    {
        setC[i] = 0;
    }

    sort(setA, n);
    sort(setB, m);

    displaySet(setA);
    displaySet(setB);

    printf("\n\n");
    printf("Union of set A and B");
    Union(setA, setB);

    printf("\n\n");
    printf("Intersection of set A and B");
    Intersection(setA, setB);
    printf("\n");

    return 0;
}
