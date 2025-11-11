#include<stdio.h>
int main(){
    int n;
    printf("enter the value of n is:");
    scanf("%d",&n);
        printf("the first n odd no. is:");
   for(int i=1;i<=2*n;i++){
 if(i%2!=0){
    printf("%d\n",i);
   }
}

    return 0;
}