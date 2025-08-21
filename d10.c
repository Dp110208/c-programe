#include<stdio.h>
int main(){
    float dollars;
    printf("Enter Money in Dollar:");
    scanf("%f",&dollars);
    float rupees=dollars*48;
    printf("Money in Pound :%.2f ",rupees/70);
return 0;
}

