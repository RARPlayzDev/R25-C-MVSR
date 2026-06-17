#include <stdio.h>
int main()
{
    int a;
    printf("Enter value of a side of a square: ");
    scanf("%d", &a);
    int area = a * a;
    printf("Area of square is: %d\n", area);
    int perimeter = 4 * a;
    printf("Perimeter of square is: %d\n", perimeter);
    return 0;
}