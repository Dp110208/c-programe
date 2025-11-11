#include<stdio.h>
int main(){
    int arr1[11],arr2[11],no;
    printf("enter 10 value or array");
    for(int i=0;i<10;i++){
        scanf("%d",&arr1[i]);
    }

    printf("the no you would like to add");
    scanf("%d",&no);
for(int i=0;i<10;i++){

arr2[i+1]=arr1[i];
 
}
arr2[0]=no;
    for(int i=0;i<11;i++){
        printf("%d\n",arr2[i]);
    }
    return 0;
}