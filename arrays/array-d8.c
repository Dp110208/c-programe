#include<stdio.h>
int main(){
    int arr1[5],arr2[10];
    printf("enter 10 value or array");
    for(int i=0;i<5;i++){
        scanf("%d",&arr1[i]);
    }
    for(int i=0;i<10;i++){
        if(i%2==0){
       arr2[i]=arr1[i/2];
        }
        else{ 
        arr2[i]=0;
          }  }
          printf("the new array is");
    for(int i=0;i<10;i++){
        printf("%d\t",arr2[i]);
    }
    return 0;
}