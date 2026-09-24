#include <stdio.h>
#include <math.h>

#define PI 3.14159265

int main()
{
    double v, r;
    scanf("%lf", &r);
    v = (4.0 / 3.0) * PI * pow(r, 3);
    printf("VOLUME = %.2f\n", v);
    return 0;
}