#include <stdio.h>

void CtoF(double ceusius)
{
    double fahrenheit;
    fahrenheit = (ceusius * 1.8) + 32;
    printf("Celsius em Fahrenheit: %.2f", fahrenheit);
}

int main()
{
    double c;
    scanf("%lf", &c);
    CtoF(c);
    return 0;
}