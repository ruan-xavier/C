#include <stdio.h>

int main()
{
    int n1;
    int fatorial = 1;
    scanf("%d", &n1);
    for (int i = 1; i <= n1; i++)
    {
        fatorial *= i;
    }
    printf("%d", fatorial);
    return 0;
}
