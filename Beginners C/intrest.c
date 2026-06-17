#include <stdio.h>
#include <math.h>
int main()
{
    double p, r, t, amt, ci;
    printf("Enter Principle amount Enter rate enter time\n");
    scanf("%lf %lf %lf", &p, &r, &t);
    amt = p * pow(1 + r / 100, t);
    ci = amt - p;
    printf("Your Compund Intrest is:- %lf\n", ci);
    return 0;
}