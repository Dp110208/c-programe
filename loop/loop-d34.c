#include<stdio.h>
int main(){
    int n,fib=0,sum,fibn1=1,fibn2=1;
    
    printf("enter the value of n is:");
    scanf("%d",&n);
    printf("%d\n%d\n",fibn1,fibn2);

   for(int i=3;i<=n;i++){
        
   
sum= fibn1+fibn2;




fibn1=fibn2;
fibn2=sum; 

//  printf("%d\n",fib);
  printf("%d\n",sum);
   }
  
    return 0;
}