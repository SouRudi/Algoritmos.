
#include <stdio.h>

int main() {
    float m1, m2, m3, media_aritmetica;

    printf("Informe o gasto de gasolina (em L) do 1º mês:\n");
    scanf("%f", &m1);

    printf("Informe o gasto de gasolina (em L) do 2º mês:\n");
    scanf("%f", &m2);

    printf("Informe o gasto de gasolina (em L) do 3º mês:\n");
    scanf("%f", &m3);

    media_aritmetica = (m1 + m2 + m3) / 3;

    printf("A média é: %.2f L\n", media_aritmetica);

    return 0;
}
