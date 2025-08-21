#include<stdio.h>
int main(){
    float P,R,N;
    printf("Enter the Amount:");
    scanf("%f",&P);
     printf("Enter the rate interest per annum:");
    scanf("%f",&R);
     printf("For how many year:");
    scanf("%f",&N);
    printf(" Interest is:%.2f",P*R*N/100);

return 0;
}

