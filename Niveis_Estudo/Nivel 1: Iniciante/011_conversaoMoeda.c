#include <stdio.h>
int main()
{
    double reais, taxa, dolares;
    printf("Digite o valor em Real:");
    scanf("%lf", &reais);
    printf("Digite a taxa de Cambio:");
    scanf("%lf", &taxa);
    dolares = reais / taxa;
    printf("Valor em Dolares: %.2f", dolares);
    return 0;
}
