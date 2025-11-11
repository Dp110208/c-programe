#include<stdio.h>
int main(){
    int arr[10];
    printf("enter 10 value or array");
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    printf("array 4th,7th and 9th element is %d,%d,%d",arr[3],arr[6],arr[8]);

    return 0;
}