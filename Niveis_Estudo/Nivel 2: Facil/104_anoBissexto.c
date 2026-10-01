#include <stdio.h>

void anoBissexto(int ano)
{
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0))
    {
        printf("É um ano bissexto\n");
    }
    else
    {
        printf("Não é um ano bissexto\n");
    }
}

int main()
{
    int ano;
    scanf("%d", &ano);
    anoBissexto(ano);

    return 0;
}
