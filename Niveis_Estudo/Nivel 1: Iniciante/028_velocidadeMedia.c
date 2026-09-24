#include <stdio.h>

int main()
{
    double v,s,t;

    scanf("%lf %lf", &s, &t);

    v = s/t;

    printf("Velocidade media = %.2f km/h", v);

    return 0;
}
