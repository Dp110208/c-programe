#include<stdio.h>

int main(){
    float gross;
    printf("enter the gross sale:");
    scanf("%f",&gross);
    if(gross>=20000){
        printf("net sale is %f",gross- gross*15/100);
    }
    else if(gross>=10000 && gross<20000){
        printf("net salary is %f",gross- gross*10/100);
    }
    else if(gross<10000){
        printf("net salary is %f",gross- gross*5/100);
    }



return 0;
}

