#include<stdio.h>

int main(){
    int a,b,c;
    printf("enter the value of a:");
    scanf("%d",&a);
     printf("enter the value of b:");
    scanf("%d",&b);
     printf("enter the value of c:");
    scanf("%d",&c);
     if(a>b && a>c ){
        printf("a is greater than b,c\n");

        }
        else if(b>a && b>c ){
        printf("b is greater than a,c\n");

    }
   else if(c>b && c>a ){
        printf("c is greater than a,b\n");

    }


     if(b>c && a>c){
        printf("c is smallest value");
        }
        else if(b>a && c>a){
        printf("a is smallest value");
    }
   else if(a>b && c>b){
        printf("c is smallest value");

    }

return 0;
}
