#include<stdio.h>
int leap(int year){
if(year%100!=0){
    if(year%4==0){
        printf("%d is leapyear",year);
    }
    else
    printf(" %d is not leapyear",year);
}
else 
  printf(" %d is not leapyear",year);

return 0;
}

int main(){
int year;
printf("enter year");
scanf("%d",&year);
leap(year);
    return 0;
}