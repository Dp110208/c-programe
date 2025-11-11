#include<stdio.h>
int main(){
int count=0,countno=0;
printf("the prime no from 1 to 500 is");
 for(int j=2;j<=500;j++){   

for(int i=2;i<j;i++){

if(j%i==0){ 

count++;

}

}
if(count==0){
  
    countno++;
    
}
count=0;
}
printf("from 1 to 500 no. of prime no. is %d",countno);
    return 0;
}