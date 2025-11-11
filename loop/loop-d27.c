#include<stdio.h>
int main(){
    int a;


printf("enter no.");
scanf("%d",&a);
printf("the factor of given no. is");
    
for(int i=1;i<=a;i++){

if(a%i==0){ 
printf("%d",i);  
}
}


    return 0;
}