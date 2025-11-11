#include<stdio.h>
int main(){
int sum=0;
for(int i=0;i<=100;i++){
    if(i%3==0){
   sum=sum+i;
    }
}   
printf("from 0 to 100 the sum of divisible by 3 is :%d",sum);    
    return 0;
}