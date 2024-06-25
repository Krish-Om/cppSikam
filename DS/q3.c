#include<stdio.h>
#include<stdlib.h>
int main(){
    int SIZE;
    printf("Enter size of sets:");
    scanf("%d",&SIZE);

    int setA[SIZE], setB[SIZE], setC[SIZE*2];

    printf("Enter elements of set A:");
    for(int i=0;i<SIZE;i++){
        scanf("%d",&setA[i]);
    }

    printf("Enter the elements of set B:");
    for(int i =0;i<SIZE;i++){
        scanf("%d",&setB[i]);
    }

    printf("Their cartesian product is:\n");
    for(int i=0;i<SIZE;i++){
        for(int j=0;j<SIZE;j++){
            printf("(%d,%d) ",setA[i],setB[j]);
        }
        printf("\n");
    }
return 0;
}