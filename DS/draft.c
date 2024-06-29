#include<stdio.h>
#include<stdlib.h>

void sort(int *arr, int n){
    for (int  i = 0; i < n; i++)
    {
        for(int j = 0; j < n-i-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main(){
    
    int setA[5] = {1,4,3,2,6};
    int setB[5] = {3,2,4,5,7};
    sort(setA,5);
    sort(setB,5);
    int setC[10];

    
    for(int i=0;i<10;i++){
        setC[i]= 0;
        if(setA[i] == setB[i]){
            setC[i] = 1;
        }
    }

    for(int i =0 ;i<5;i++){
        printf("%d ",setA[i]);
    }

    printf("\n");

    for(int i=0;i<5;i++){

        printf("%d ",setB[i]);
    }

    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ",setC[i]);
    }
    


return 0;
}