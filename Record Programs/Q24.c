#include <stdio.h>
#include <string.h>

int main() {
    char s1[50], s2[50], s3[50];

    printf("Enter first string: ");
    scanf("%s", s1);

    printf("Enter second string: ");
    scanf("%s", s2);

    printf("Length of first string = %d\n", strlen(s1));

    strcpy(s3, s1);
    printf("Copied string = %s\n", s3);

    strcat(s1, s2);
    printf("Concatenated string = %s\n", s1);

    printf("Comparison result = %d\n", strcmp(s1, s2));

    return 0;
}