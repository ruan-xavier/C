#include <stdio.h>

int main()
{
    double metro;
    printf("digite quant de Metro");
    scanf("%lf", &metro);
    printf("metro em Cm = %.2f\nmetro em Mm = %.2f", (metro * 100), (metro * 1000));

    return 0;
}