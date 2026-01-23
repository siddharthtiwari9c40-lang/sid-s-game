#include <stdio.h>
#include<string.h>
int ispalindrome(char a[]);
int main() {
    char a[100];
    int i,b;
    printf("enter the word you want to check = ");
    fgets(a, sizeof(a) ,stdin);
    b=ispalindrome(a);
    if(b){
        printf("your word is a palindrome");
    }else{
        printf("your word is not a palindrome");
    }
}

int ispalindrome(char a[]) {
    int i, len;
    len = strlen(a);
    if (a[len - 1] == '\n') {
        a[len - 1] = '\0';
        len--;
    }
    for (i = 0; i < len / 2; i++) {
        if (a[i] != a[len - 1 - i]) {
            return 0; 
        }
    }
    return 1; 
}