
#include <stdio.h>

int main() {
    float n1, n2, n3, n4, media_aritmetica;

    printf("Informe a 1ª nota:\n");
    scanf("%f", &n1);

    printf("Informe a 2ª nota:\n");
    scanf("%f", &n2);

    printf("Informe a 3ª nota:\n");
    scanf("%f", &n3);

    printf("Informe a 4ª nota:\n");
    scanf("%f", &n4);

    media_aritmetica = (n1 + n2 + n3 + n4) / 4;

    printf("A média é: %.2f\n", media_aritmetica);

    return 0;
}
