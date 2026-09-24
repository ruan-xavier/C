#include <stdio.h>

int main()
{
    float w, f, d;
    printf("Digite as seguintes informações para calcular o Trabalho (W):\n[F]: Intensidade da força aplicada (em Newtons)\n[d]: Deslocamento/Distância percorrida (em metros)\n");
    scanf("%f %f", &f, &d);
    w = f * d;
    printf("Trabalho (W): %.2f", w);
    return 0;
}