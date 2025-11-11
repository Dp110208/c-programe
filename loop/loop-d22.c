#include<stdio.h>
int main(){
    int a,count=0;
printf("enter no.");
scanf("%d",&a);
for(int i=0;i<100;i++){
   if(a>0){ 
    a=a/10;
    count++;

}}
printf("%d",count);


    return 0;
}