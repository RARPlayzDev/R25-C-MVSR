#include <stdio.h>
#include <string.h>
int main()
{
    int length=0,i;
    char name[100];
    printf("Enter your name: ");
    gets(name);
    printf("Name is: %s\n",name);
    length=strlen(name);
    printf("Length of the name: %d\n",length);
}