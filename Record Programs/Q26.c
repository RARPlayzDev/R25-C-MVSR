#include <stdio.h>

int main() {
    FILE *fp;
    char ch;

    fp = fopen("test.txt", "w");

    fprintf(fp, "Hello World");

    fclose(fp);

    fp = fopen("test.txt", "r");

    while((ch = fgetc(fp)) != EOF)
        printf("%c", ch);

    fclose(fp);

    return 0;
}