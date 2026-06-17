#include <stdio.h>

union employee {
    int eno;
    char name[20];
    float salary;
};

int main() {
    union employee e;

    printf("Enter employee number: ");
    scanf("%d", &e.eno);

    printf("Employee Number = %d\n", e.eno);

    printf("Enter employee name: ");
    scanf("%s", e.name);

    printf("Employee Name = %s\n", e.name);

    printf("Enter salary: ");
    scanf("%f", &e.salary);

    printf("Salary = %.2f\n", e.salary);

    return 0;
}