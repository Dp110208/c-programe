#include<stdio.h>
int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    printf("array element is");
    for(int i=0;i<5;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}