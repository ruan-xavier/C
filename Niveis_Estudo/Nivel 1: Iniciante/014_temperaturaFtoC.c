#include <stdio.h>

double FtoC(double fahrenheit)
{
    double ceusius;
    ceusius = (fahrenheit - 32) / 1.8;
    return ceusius;
}

int main()
{
    double f;
    scanf("%lf", &f);
    printf("Fahrenheit em Celsius: %.2f", FtoC(f));
    return 0;
}