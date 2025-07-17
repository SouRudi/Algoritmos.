#include <stdio.h>

int main()
{
    float r;
    float h;


    printf("Qual a altura da embalagem: \n");
    scanf("%f", &h);

    printf("Qual o raio da embalagem: \n");
    scanf("%f", &r);

    float vol = 3.14159 * r * h;

    printf("O volume da embalagem e : %.2f\n ", vol);

    float ml = vol*1000;


    printf("O volume em litros e: %.1f (L)\n", ml);

    return 0;
}
