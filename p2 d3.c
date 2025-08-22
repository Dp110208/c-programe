#include<stdio.h>

int main(){
    float gross;
    printf("enter the gross salary:");
    scanf("%f",&gross);
    if(gross>=10000){
        printf("net salary is %f",gross+gross*10/100 - gross*3/100);
    }
    if(gross>5000 && gross<10000){
        printf("net salary is",gross+gross*7/100 - gross*2/100);
    }



return 0;
}

