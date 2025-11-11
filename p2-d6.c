#include<stdio.h>
int main(){
    int a,b,c,total;
    float avg;
   printf("enter three sub marks");
   scanf("%d",&a);
      scanf("%d",&b);
      scanf("%d",&c);
   total=a+b+c;
   avg=total/3;
        if(a<35 ||b<35 ||c<35){
    printf("You are fail");
   }
   else if(avg>=70){
    printf("You got Distinction");
   }
     else if(avg>=60){
    printf("You got First class");
   }
     else if(avg>=50){
    printf("You got Secondclass");
   }
    else if(avg>=35){
    printf("You got Thirdclass");
   }
   else{
    printf("you are fail");
   }

    return 0;

}