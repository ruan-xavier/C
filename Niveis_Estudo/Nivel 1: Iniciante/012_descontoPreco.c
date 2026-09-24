#include <stdio.h>
int main()
{
    double valor;
    printf("digite o valor do produto para receber um desconto de 10%%\n");
    scanf("%lf", &valor);
    printf("Preco final com 10%% de desconto: R$ %.2f\n", valor * 0.9);

    return 0;
}