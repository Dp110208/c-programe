#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s",str);

   if(strrev(str)==str){  
    printf("this string is palindrome");
   }
   else{
     printf("this string is not palindrome");
   }
    return 0;
}