#include<stdio.h>
int main(){
    float bytes;
    printf("Enter bytes:");
    scanf("%f",&bytes);
    printf("Bytes to KB: %.2f ",bytes/1000);
    printf("Bytes to MB: %.2f ",bytes/1000000);
    printf("Bytes to GB: %.2f ",bytes/1000000000);
return 0;
}

