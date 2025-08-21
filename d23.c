#include<stdio.h>
int main(){
    float a,b,c;
    printf("Enter the marks for first subject:");
    scanf("%f",&a);
    printf("Enter the marks for second subject:");
    scanf("%f",&b);
    printf("Enter the marks for third subject:");
    scanf("%f",&c);


     printf("Total marks is:%f",a+b+c);
     printf("Average marks is:%f",(a+b+c)/3);


return 0;
}


