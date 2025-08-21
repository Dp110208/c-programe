#include<stdio.h>
int main(){
    float gross;
    printf("Enter the gross salary:");
    scanf("%f",&gross);
    float allow=gross*10/100;
    float deduct=gross*3/100;

     printf("Net salary is:%f",gross+allow-deduct);


return 0;
}

