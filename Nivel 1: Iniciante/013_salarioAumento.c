#include <stdio.h>
int main()
{
    double salario;
    printf("digite o salario\n");
    scanf("%lf", &salario);
    printf("Salario final com 15%% de aumento: R$ %.2f\n", salario * 1.15);

    return 0;
}