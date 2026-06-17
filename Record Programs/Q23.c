#include <stdio.h>

int main() {
    int a = 10;
    int *p;

    p = &a;

    printf("Address = %u\n", p);

    p++;
    printf("After increment = %u\n", p);

    p--;
    printf("After decrement = %u\n", p);

    return 0;
}