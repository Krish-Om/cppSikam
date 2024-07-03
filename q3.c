#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,m;
    printf("Enter size of setA and setB:");
    scanf("%d %d",&n,&m);

    int setA[n], setB[m];

    printf("Enter elements of set A:");
    for(int i=0;i<n;i++){
        scanf("%d",&setA[i]);
    }

    printf("Enter the elements of set B:");
    for(int i =0;i<m;i++){
        scanf("%d",&setB[i]);
    }

    printf("Their cartesian product is:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("(%d,%d) ",setA[i],setB[j]);
        }
        printf("\n");
    }
return 0;
}