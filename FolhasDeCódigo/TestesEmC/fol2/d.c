#include <stdio.h>

int main() {
    float c, f;

    printf("Qual é a temperatura (em Celsius)? ");
    scanf("%f", &c);

    f = c * 9 / 5 + 32;
    printf("A conversão dela para Fahrenheit: %.2f\n", f);

    
}
