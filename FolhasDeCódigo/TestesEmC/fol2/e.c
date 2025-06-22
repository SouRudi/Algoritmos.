#include <stdio.h>

int main() {
    float f, c;

    printf("Qual é a temperatura (em Fahrenheit)? ");
    scanf("%f", &f);

    c = (f - 32) * 5 / 9;
    printf("A conversão dela para Celsius: %.2f\n", c);

  
}
