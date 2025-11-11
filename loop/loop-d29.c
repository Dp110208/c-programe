#include<stdio.h>
int main(){
    int a,count=0;


printf("enter no.");
scanf("%d",&a);

    
for(int i=2;i<a;i++){

if(a%i==0){ 
count++; 
}
}
if(count==0){
    printf("the no. %d is prime no.",a);
}
else{
    printf("%d is not a prime no.",a);
}
    return 0;
}