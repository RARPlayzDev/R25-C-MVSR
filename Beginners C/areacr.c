#include <stdio.h>
int main()
{
    float pi;
    float r;
    printf("Enter value of radius: ");
    scanf("%f", &r);
    pi = 3.14;
    float area = pi * r * r;
    printf("Area of circle is: %f\n", area);
}