#include<stdio.h>
#include<string.h>
int main(){
    char arr1[100];
    int count=0;
    printf("enter string");
scanf("%s",arr1);

int length=strlen(arr1);
for(int i=0;i<length;i++){
    for(int j=0;j<length;j++){
     if(arr1[i]==arr1[j]){
        count++;
     }
    }
    printf("%c frequency is %d\n",arr1[i],count);
count=0;
}
}