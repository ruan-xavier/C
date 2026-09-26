#include <stdio.h>
int main()
{

    int quantArquivos;
    long long int limite;
    scanf("%d %lld", &quantArquivos, &limite);
    long long int arquivos[quantArquivos];

    for (int i = 0; i < quantArquivos; i++)
    {
        scanf("%lld", &arquivos[i]);
    }

    for (int i = 0; i < quantArquivos - 1; i++)
    {
        for (int j = 0; j < quantArquivos - i - 1; j++)
        {
            if (arquivos[j] > arquivos[j + 1])
            {
                int temp = arquivos[j];
                arquivos[j] = arquivos[j + 1];
                arquivos[j + 1] = temp;
            }
        }
    }

    int inicio = 0;
    int fim = quantArquivos - 1;
    int pastas = 0;

    while (inicio <= fim)
    {
        if (inicio == fim)
        {
            pastas++;
            break;
        }

        if (arquivos[inicio] + arquivos[fim] <= limite)
        {
            inicio++;
            fim--;
        }
        else
        {
            fim--;
        }
        pastas++;
    }
    printf("%d\n", pastas);

    return 0;
}