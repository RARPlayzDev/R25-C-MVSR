#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100];
    printf("Enter a string: ");
    gets(str1);
    int len =strlen(str1);
    printf("Length of the string: %d\n", len);
}