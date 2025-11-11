#include<stdio.h>
int main(){
    int a,b,sum=0;
printf("enter no.");
scanf("%d",&a);
for(int i=0;i<100;i++){
   if(a>0){ 
    b=a%10;
    a=a/10;
  
    sum=sum+b;
}}
printf("sum of digit of no. is:%d",sum);

    return 0;
}