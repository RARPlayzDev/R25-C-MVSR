#include <stdio.h>

int main()
{
    double a, b, c, x, r;

    printf("Enter value of a: ");
    scanf("%lf", &a);
    printf("Enter value of b: ");
    scanf("%lf", &b);
    printf("Enter value of c: ");
    scanf("%lf", &c);
    printf("Enter value of x: ");
    scanf("%lf", &x);

    r = a * (x * x) + b * x + c;

    printf("f(p) = %lf\n", r);

    return 0;
}