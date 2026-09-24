#include <stdio.h>
int main()
{
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    int resto = n1%n2;
    printf("resto = %d",resto);
    return 0;
}