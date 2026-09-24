#include <stdio.h>
int main()
{
    int idade;
    printf("Digite sua idade");
    scanf("%d", &idade);
    printf("Sua idade em dias aproximadamente é: %d", idade * 365);
    return 0;
}