#include<stdio.h>
int main(){
    int r;
    int t[9];

    printf("enter value of money");
    scanf("%d",&r);
    int money[]={1,2,5,10,20,50,100,200,500};
    for(int i=8;i>=0;i--){
      if(r!=0){
      
        t[i]=r/money[i];
          r=r%money[i];

      }
      else{
        t[i]=0;
      }
        
    }

    for(int i=0;i<9;i++){
        printf("%d\t",t[i]);
    }
    return 0;
}