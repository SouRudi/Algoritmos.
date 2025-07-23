#include <stdio.h>

int main()
{
    float raio;
    float alt;

    printf("Qual a altura da embalagem: \n");
    scanf("%f", &alt);
    printf("Qual o raio da embalagem: \n");
    scanf("%f", &raio);

    float vol = 3.14159 * raio * alt;
    printf("O volume da embalagem eh: %.2f\n ", vol);

    float ml = vol*1000;
    printf("O volume em litros eh: %.1f (L)\n", ml);

    return 0;
}
