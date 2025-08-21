#include<stdio.h>
int main(){
    float kilograms;
    printf("Enter weight in kilogram:");
    scanf("%f",&kilograms);
    printf("Weight in gram: %.2f ",kilograms*1000);
return 0;
}
