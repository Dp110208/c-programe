#include<stdio.h>
int main(){
    int n;
    int sum=0;
    printf("enter the value of n is:");
    scanf("%d",&n);

   for(int i=1;i<=n;i++){
 sum=sum+i;
    
   }
  printf("the sum of first n natural no. is:%d",sum);
    return 0;
}