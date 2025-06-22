
#include <stdio.h>

int main() {
    int original = 123;
    int unidade, dezena, centena, resto;

    printf("Digite um número de 3 dígitos:\n");

    printf("NÚMERO ANTES DA INVERSÃO\n");
    printf("%d\n", original);

    centena = original / 100;
    resto = original % 100;
    dezena = resto / 10;
    unidade = resto % 10;

    printf("Número após inversão: %d%d%d\n", unidade, dezena, centena);

    return 0;
}
