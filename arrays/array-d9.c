#include<stdio.h>
int main(){
    int arr1[5],arr2[5];
    printf("enter 5 value or array");
    for(int i=0;i<5;i++){
        scanf("%d",&arr1[i]);
    }
    for(int i=0;i<5;i++){
        
       arr2[i]=arr1[4-i];
        
    }
        
          printf("the reverse array is");
    for(int i=0;i<5;i++){
        printf("%d\t",arr2[i]);
    }
    return 0;
}