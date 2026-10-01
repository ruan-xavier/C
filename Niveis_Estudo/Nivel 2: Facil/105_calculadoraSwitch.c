#include <stdio.h>

int main()
{
    char operacao;
    double n1, n2,resultado;
    printf("Escolha a operação '+' '-' '*' '/'");
    scanf(" %c", &operacao);
    printf("Escolha 2 valores");
    scanf("%lf %lf", &n1, &n2);

    switch (operacao)
    {
    case '+':
        resultado = n1 + n2;
        break;
    case '-':
        resultado = n1 - n2;
        break;
    case '*':
        resultado = n1 * n2;
        break;
    case '/':
        resultado = n1 / n2;
        break;

    default:
        break;
    }
    printf("Resultado = %.2f",resultado);
    return 0;
}
