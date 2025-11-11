#include<stdio.h>
int main(){
    int orig,a,b,sum=0;

printf("enter no.");
scanf("%d",&a);

    orig=a;
for(int i=0;i<100;i++){
   if(a>0){ 
    b=a%10;
    a=a/10;
  
    sum=sum+b*b*b;
}}
if(sum==orig){
    printf("%d is armstrong no.",orig);
}
else{
    printf("%d is not a armstrong no.",orig);
}

    return 0;
}