#include <stdio.h>
#include<string.h>
int main() {
    char str[100];
    int i,j;

    printf("Enter a string: ");
    gets(str);  
j=strlen(str);
    printf("\nCharacters of the string printed vertically:\n");

    for(i = j; i>=0; i--) {
        printf("%c\n", str[i]);
    }

    return 0;
}