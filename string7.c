#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Lowercase: %s", strlwr(str));

    printf("Uppercase: %s", strupr(str));

    return 0;
}