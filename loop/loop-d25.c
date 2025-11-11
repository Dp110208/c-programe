#include <stdio.h>

int main() {
    int num,original,rem,reverse=0;
    printf("enter the value:");
    scanf("%d",&original);
    num=original;
    while(num!=0){
       rem=num%10;
       reverse=reverse*10+rem;
       num=num/10;
    }
    if(reverse==original){
        printf("%d is palindrome",original);
    }
        else if(reverse!=original){
        printf("%d is not a palindrome",original);
    }

    return 0;
}