#include<stdio.h>
int main(){
    int n;
    int fact=1;
    printf("enter the value of n is:");
    scanf("%d",&n);

   for(int i=1;i<=n;i++){
 
    fact=fact*i;
   }
  printf("the factorial of first n natural no. is:%d",fact);
    return 0;
}