#include<stdio.h>
int main(){
    float celcius;
    printf("Enter temp. in celcius:");
    scanf("%f",&celcius);
    printf("Temp. in Fehranheit: %.2f ",(celcius*9/5)+32);
    return 0;
}


