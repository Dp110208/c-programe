#include<stdio.h>
typedef struct customer
{
    int accountno;
    char name[100];
    int balance;

}cust;

void printacc(cust c){
    printf("%d\n",c.accountno);
    if(c.balance<100){
    printf("balance is below then 100 :%s\n",c.name);
}
}



int main(){
cust c1={112233,"Daksh",70};
cust c2={113423,"Daksh",90};
cust c3={115563,"Daksh",80};
cust c4={111473,"Daksh",120};
cust c5={115973,"Daksh",130};
printacc(c1);
printacc(c2);
printacc(c3);
printacc(c4);
printacc(c5);


    return 0;
}
