#include<stdio.h>
int main(){
int countp=0;
int countn=0;
int count0=0;
int arr[10]={1,-5,-6,0,6,7,0,-6,6,0};
for(int i=0;i<10;i++){
 if(arr[i]<0){
    countn++;
 }
  else if(arr[i]==0){
    count0++;
 }
  else if(arr[i]>0){
    countp++;
 }
 

}
printf("total no. of positive is %d negative is %d zero is %d ",countp,countn,count0);

    return 0;
}