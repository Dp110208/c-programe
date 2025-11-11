#include<stdio.h>
int main(){
    int arr1[11],arr2[11],no;
    printf("enter 11 value or array");
    for(int i=0;i<11;i++){
        scanf("%d",&arr1[i]);
    }

for(int i=0;i<10;i++){

arr2[i]=arr1[i+1];
 
}

    for(int i=0;i<10;i++){
        printf("%d\n",arr2[i]);
    }
    return 0;
}