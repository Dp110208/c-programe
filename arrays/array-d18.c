#include<stdio.h>
int main(){
    int arr1[11],arr2[11],no,pos;
    printf("enter 11 value of array");
    for(int i=0;i<11;i++){
        scanf("%d",&arr1[i]);
    }
        for(int i=0;i<11;i++){
        printf("%d\t",arr1[i]);
    }
    printf("\ngive the value that to delete");
    scanf("%d",&no);
printf("\n\n\n");
for(int i=0;i<11;i++){
   if (arr1[i]==no){
    pos=i;
   }
}
    for(int i=0;i<pos;i++){

arr2[i]=arr1[i];
 
}
for(int i=pos;i<10;i++){

arr2[i]=arr1[i+1];
 
}



    for(int i=0;i<10;i++){
        printf("%d\t",arr2[i]);
    }
    return 0;
}