#include<stdio.h>
int main(){
    int arr1[11],arr2[11],no,pos;
    printf("enter 10 value or array");
    for(int i=0;i<10;i++){
        scanf("%d",&arr1[i]);
    }

    printf("the no you would like to add");
    scanf("%d",&no);
    printf("where to add position no.");
    scanf("%d",&pos);
    for(int i=0;i<pos-1;i++){

arr2[i]=arr1[i];
 
}
for(int i=pos-1;i<10;i++){

arr2[i+1]=arr1[i];
 
}
arr2[pos-1]=no;
    for(int i=0;i<11;i++){
        printf("%d\n",arr2[i]);
    }
    return 0;
}