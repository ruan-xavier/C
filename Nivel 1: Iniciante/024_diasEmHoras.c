#include <stdio.h>

int main()
{
    int quantDias, horas, minutos, segundos;
    scanf("%d", &quantDias);

    horas = quantDias * 24;
    minutos = horas * 60;
    segundos = minutos * 60;
    printf("Dias:%d\nHoras:%d\nMinutos:%d\nSegundos:%d", quantDias,horas,minutos,segundos);

    return 0;
}