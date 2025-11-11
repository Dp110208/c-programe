#include<stdio.h>
int main(){
    int a,sum=0;


printf("enter no.");
scanf("%d",&a);

    
for(int i=1;i<=a;i++){

if(a%i==0){ 

sum+=i;  
}

}
int t=sum-a;
if(a==t)
{
    printf("%d is a perfect no.",a);
}
else{
    printf("%d is not a perfect no.",a);
}
    return 0;
}