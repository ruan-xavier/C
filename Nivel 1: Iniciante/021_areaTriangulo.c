#include <stdio.h>
int main()
{
    double b, h, areaT;
    scanf("%lf %lf", &b, &h);
    areaT = (b * h) / 2;
    printf("%.2f\n", areaT);
    return 0;
}