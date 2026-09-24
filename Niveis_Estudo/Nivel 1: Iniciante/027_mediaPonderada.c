#include <stdio.h>

int main()
{
    double n1, n2, n3, mediaP;

    scanf("%lf %lf %lf", &n1, &n2, &n3);

    mediaP = ((n1 * 2) + (n2 * 3) + (n3 * 5)) / (2 + 3 + 5);

    printf("Media Ponderada = %.2f", mediaP);

    return 0;
}
