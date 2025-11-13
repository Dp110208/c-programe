#include<stdio.h>
int main(){
    printf("enter value for array");
    int arr[4][4],arr1[16];
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            scanf("%d",&arr[i][j]);
        }
    }
        for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    int k=0;
        for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
      
            arr1[k]=arr[i][j];
            k++; 
        }
    }
    for(int k=0;k<16;k++){
        printf("%d\t",arr1[k]);
    }
    return 0;
}