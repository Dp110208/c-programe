#include<stdio.h>
int power(int a,int b){
int t=a;
    for(int i=1;i<b;i++){
    a=a*t;;
}
printf("the %d power of %d is:%d",b,t,a);
return 0;
}

int main(){
int a,b;
printf("enter base and power");
scanf("%d %d",&a,&b);
power(a,b);
    return 0;
}