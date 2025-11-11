#include<stdio.h>
int main(){
    float sum=0;

   for(int i=1;i<=10;i++){
 sum=sum+i;
    
   }
  printf("the sum of first n natural no. is:%0.f\n",sum);
    printf("the mean of first n natural no. is:%f",sum/10);
    return 0;
}