#include<stdio.h>
int main(){
    int arr1[11],arr2[11],no,pos=0;
    printf("enter 11 value of array");
    for(int i=0;i<11;i++){
        scanf("%d",&arr1[i]);
    }
        for(int i=0;i<11;i++){
        printf("%d\t",arr1[i]);
    }
    printf("\nfor find index give value ");
    scanf("%d",&no);
printf("\n");
for(int i=0;i<11;i++){
   if (arr1[i]==no){
    pos=i;
   }
}


if(pos!=0){
    printf("your searched value at index %d",pos);
}
else if(pos==0){
    printf("value not found");
}

    return 0;
}