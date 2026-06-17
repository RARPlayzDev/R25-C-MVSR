#include <stdio.h>
#include <string.h>

void reverse(char s[]) {
    int i, len;

    len = strlen(s);

    for(i = len - 1; i >= 0; i--)
        printf("%c", s[i]);
}

int main() {
    char s[50];

    printf("Enter a string: ");
    scanf("%s", s);

    printf("Reverse string = ");
    reverse(s);

    return 0;
}