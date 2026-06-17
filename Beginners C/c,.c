#include <stdio.h>
#include <math.h>
int main()
{
    double principal, rate, time, compoundintrest, amount;
    printf("enter principle amount,rate of intrest and time period in years");
    scanf("%lf %lf %lf", &principal, &rate, &time);
    amount = principal * pow(1 + rate / 100, time);
    printf("amount is %lf", amount);
    double
        ci = amount - principal;
    printf("compound intrest is %lf", ci);
    return 0;
}