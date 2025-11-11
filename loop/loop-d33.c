#include <stdio.h>

int main() {
    int a,t,r,no,z,count=0,original;
    printf("enter the no.");
    scanf("%d",&a);
original=a;
    t=a*a;
    printf("%d",t);

for(int i=0;i<100;i++){
   if(a>0){ 
    a=a/10;
    count++;

}}
printf("count %d",count);
no=t/10;

for(int i=1;i<100;i++){
    if(count==i){
        r=i;
        break;
    }
    no=no/10;
   
}


for(int i=1;i<100;i++){
    if(count==i){
        r=i;
        break;
    }
  no=no*10;

}


no=no*10;
z=t-no;
printf(" z %d t %d no %d",z,t,no);
if(z==original){
    printf("it  is atmosphiric");
}
else{
    printf("it  is not atmosphiric");
}


    return 0;
}