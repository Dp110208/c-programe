#include<stdio.h>
int main(){
    int a;
printf("enter no.");
scanf("%d",&a);
for(int i=0;i<100;i++){
   if(a>0){ int b=a%10;
    a=a/10;
    printf("%d,",b);
}}


    return 0;
}