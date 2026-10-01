#include <stdio.h>

int main()
{
    int n, resultado = 0;
    printf("Digite o valor N\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        resultado += i;
    }
    printf("Soma dos valores de 1 a N dá %d", resultado);
    return 0;
}
