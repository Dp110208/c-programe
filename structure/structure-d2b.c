#include<stdio.h>
typedef struct customer
{
    int accountno;
    char name[100];
    int balance;

}cust;

void printacc(cust c,int account,int amount,int code){

if(c.accountno==account){
    if(code==0){
      if(amount<=c.balance){
        c.balance=c.balance-amount;
           printf("now your balance is :%d",c.balance);
      }
      else{
printf("the balance is insufficient for the specified withdrawal");
      }
    }
    else if(code==1){
        c.balance+=amount;
        printf("now your balance is :%d",c.balance);
    }
}
}



int main(){
    int amount,code,account;
   printf("enter account no");
    scanf("%d",&account);
    printf("enter amount you want to withdraw or deposit");

scanf("%d",&amount);
printf("for withdrawal enter code 0 for deposit enter code 1");
scanf("%d",&code);
cust c1={112233,"Daksh",70};
cust c2={113423,"Daksh",90};
cust c3={115563,"Daksh",80};
cust c4={111473,"Daksh",120};
cust c5={115973,"Daksh",130};
printacc(c1,account,amount,code);
printacc(c2,account,amount,code);
printacc(c3,account,amount,code);
printacc(c4,account,amount,code);
printacc(c5,account,amount,code);


    return 0;
}
