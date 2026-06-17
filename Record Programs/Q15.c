#include <stdio.h>

void swap(int x, int y) {
    int temp;

    temp = x;
    x = y;
    y = temp;

    printf("Inside function:\n");
    printf("x = %d y = %d\n", x, y);
}

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    swap(a, b);

    printf("Inside main function:\n");
    printf("a = %d b = %d", a, b);

    return 0;
}
