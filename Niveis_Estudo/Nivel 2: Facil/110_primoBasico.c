#include <stdio.h>

void ehPrimo(int numero)
{
    int count = 0;
    if (numero > 1)
    {
        for (int i = 1; i <= numero; i++)
        {
            if (numero % i == 0)
                count++;
        }
    }
    if (count == 2)
        printf("Eh primo");
    else
        printf("Nao Eh primo");
}

int main()
{
    int n1;
    scanf("%d", &n1);
    ehPrimo(n1);

    return 0;
}