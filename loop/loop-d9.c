#include<stdio.h>
int main(){
    int n;
    int sum=0;
    printf("enter the value of n is:");
    scanf("%d",&n);

   for(int i=1;i<=2*n;i++){
 if(i%2==0){
    sum=sum+i;
 }
   }
  printf("the sum of first n odd no. is:%d",sum);
    return 0;
}