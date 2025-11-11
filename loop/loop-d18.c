#include<stdio.h>
int main(){

int countg=0;
char g,b;
int countb=0;
char arr[10]={g,b,b,g,b,g,b,g,b,g};
for(int i=0;i<10;i++){
    if(arr[i]==g){

        countg++;
    }
        else if(arr[i]==b){

        countb++;
    }
}
printf("no. of girls is %d & no of boys is %d",countg,countb);
    return 0;
}