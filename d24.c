#include<stdio.h>
int main(){
     int a,b;
    printf("Enter the a:");
    scanf("%d",&a);
    printf("Enter the b:");
    scanf("%d",&b);
    int t=a;
     a=b;
     b=t;

     printf("a is :%d,b is :%d",a,b);


return 0;
}



