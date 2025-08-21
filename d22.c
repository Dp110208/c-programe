#include<stdio.h>
int main(){
    float gross;
    printf("Enter the gross sales price:");
    scanf("%f",&gross);
    float discount=gross*10/100;


     printf("Net sale is:%.2f",gross-discount);


return 0;
}


