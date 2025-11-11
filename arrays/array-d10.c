#include<stdio.h>
int main(){
    int arr1[10],count=0;
    printf("enter 10 value or array");
    for(int i=0;i<10;i++){
        scanf("%d",&arr1[i]);
    }
for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){
     if(arr1[i]%arr1[j]==0){
        count++;
     }
    }
    printf("%d frequency is %d\n",arr1[i],count);
count=0;
}
}