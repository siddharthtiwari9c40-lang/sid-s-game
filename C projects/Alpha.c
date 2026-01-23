#include <stdio.h>
void reverse(char s[]) {
    int i = 0, j = 0;
    char t;
    while(s[j] != '\0')
        j++;
    j = j - 1;
    while(i < j) {
        t = s[i];
        s[i] = s[j];
        s[j] = t;
        i++;
        j--;
    }
}
int main() {
    char s[100];
    printf("Enter string: ");
    gets(s);
    reverse(s);
    printf("Reversed string: %s", s);
    printf("Reversed string: %s", strrev(s));
    return 0;
}
