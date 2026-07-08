#include <stdio.h>

int main(){
    char c;
    printf("enter a character: ");
    scanf("%c", &c);

    if(c >= 'a' && c <= 'z') {
        printf("the character is in lowercase");
    } else if(c >= 'A' && c <= 'Z') {
        printf("the character is in uppercase");
    } else {
        printf("the entered character is not an alphabet");
    }
    return 0;
}