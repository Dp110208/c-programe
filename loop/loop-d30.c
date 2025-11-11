#include<stdio.h>
int main(){
int count=0;
printf("the prime no from 1 to 500 is");
 for(int j=2;j<=500;j++){   

for(int i=2;i<j;i++){

if(j%i==0){ 

count++;

}

}
if(count==0){
    printf("%d\t",j);
    
}
count=0;
}

    return 0;
}