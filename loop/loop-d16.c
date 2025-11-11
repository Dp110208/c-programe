#include<stdio.h>
int main(){

    int n[5]={2,5,56,23,55};
    int min=n[0];
for(int i=0;i<5;i++){
for(int j=i;j<4;j++){
   if(n[i]>n[j+1]){
    printf("%d\n",n[i]);
    break;
}
  }
 }
for(int i=0;i<5;i++){
 if(n[i]<min){
    min=n[i];
 }

 }
 printf("%d",min);
    return 0;
}