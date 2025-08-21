#include<stdio.h>
int main(){
    float F;
    printf("Enter temp. in Fehranheit:");
    scanf("%f",&F);
    printf("Temp. in Celcius: %.2f ",(F-32)*5/9);
    return 0;
}



