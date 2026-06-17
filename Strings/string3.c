#include <stdio.h>
#include <string.h>
int main() {
    char name1[100]="Kaarthik";
    char name2[100];
    char name3[100];
    printf("Name 1: %s\n", name1);
    strcpy(name2, "Ashish");
    printf("Enter name 3: ");
    scanf("%s", name3);
    printf("Name 2: %s\n", name2);
    printf("Name 3: %s\n", name3);
}