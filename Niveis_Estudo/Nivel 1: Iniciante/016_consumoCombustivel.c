#include <stdio.h>

void Cmedio()
{
    float distancia, combustivelGasto, ConsumoMedio;
    printf("Digite a distancia percorrida:");
    scanf("%f", &distancia);
    printf("Digite o gasto de combustivel:");
    scanf("%f", &combustivelGasto);
    ConsumoMedio = distancia / combustivelGasto;
    printf("O consumo medio foi: %.2f", ConsumoMedio);
}

int main()
{
    Cmedio();
    return 0;
}