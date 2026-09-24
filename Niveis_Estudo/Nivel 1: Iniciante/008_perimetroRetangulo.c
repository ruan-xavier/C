#include <stdio.h>
int main()
{
    double b, h, perimetro;
    scanf("%lf%lf", &b, &h);
    perimetro = 2 * (b + h);
    printf("perimetro: %.2f", perimetro);
    return 0;
}