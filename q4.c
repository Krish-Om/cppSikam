#include<stdio.h>
#include<stdlib.h>
int floorOf(float n){
    return (int)n;
}

int ceilOf(float n){
    return (int)n+1;
}

int main(){

    float num;
    printf("Enter a number:");
    scanf("%f",&num);

    printf("Floor of %.2f is %d\n",num,floorOf(num));
    printf("Ceil of %.2f is %d\n",num,ceilOf(num));
return 0;
}