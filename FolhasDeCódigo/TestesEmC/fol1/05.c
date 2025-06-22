#include <stdio.h>

int main() {
    float altura, peso;
    const float k = 72.7;
    const float B = 58;

    printf("Informe a altura:\n");
    scanf("%f", &altura);

    peso = k * altura - B;

    printf("O seu peso ideal é: %.2f\n", peso);

    return 0;
}
