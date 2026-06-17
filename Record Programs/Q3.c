#include <stdio.h>

int main() {
    float a, b, result;
    char choice;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &choice);

    switch(choice) {
        case '+':
            result = a + b;
            printf("Result = %.2f", result);
            break;

        case '-':
            result = a - b;
            printf("Result = %.2f", result);
            break;

        case '*':
            result = a * b;
            printf("Result = %.2f", result);
            break;

        case '/':
            result = a / b;
            printf("Result = %.2f", result);
            break;

        default:
            printf("Invalid operator");
    }

    return 0;
}
