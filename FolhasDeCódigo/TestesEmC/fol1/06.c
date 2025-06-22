
// Arquivo: 06.c
#include <stdio.h>

int main() {
    float x, y, trocar;

    printf("Insira o x: ");
    scanf("%f", &x);

    printf("Insira o y: ");
    scanf("%f", &y);

    printf("ANTES DA TROCA\n");
    printf("%.2f %.2f\n", x, y);

    trocar = x;
    x = y;
    y = trocar;

    printf("DEPOIS DA TROCA\n");
    printf("%.2f %.2f\n", x, y);

    return 0;
}
