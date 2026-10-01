#include <stdio.h>

void imprimirTabuada(int Numero)
{
    printf("========== Tabuada do %d ==========\n", Numero);
    for (int i = 0; i <= 10; i++)
    {
        printf("%d X %d = %d\n", i, Numero, (i * Numero));
    }
    printf("===================================\n");
}

int main()
{
    
    for (int i = 1; i <= 10; i++)
    {
        imprimirTabuada(i);
    }

    return 0;
}
