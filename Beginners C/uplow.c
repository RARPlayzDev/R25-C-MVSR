#include <stdio.h>
#include <ctype.h> // for isupper() and islower()

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (isupper(ch)) {
        printf("The character '%c' is an UPPERCASE letter.\n", ch);
    }
    else if (islower(ch)) {
        printf("The character '%c' is a lowercase letter.\n", ch);
    }
    else {
        printf("The character '%c' is not an alphabet letter.\n", ch);
    }

    return 0;
}