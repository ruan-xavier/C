#include <stdio.h>

int main()
{
    int idade;

    scanf("%d", &idade);

    if (idade < 12)
    {
        printf("Infantil");
    }
    else if (idade < 17)
    {
        printf("Juvenil");
    }
    else
    {
        printf("Adulto");
    }

    return 0;
}
