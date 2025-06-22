#include <stdio.h>
#define PI 3.14159

int main() {
    float r, h, V, ml;

    printf("Digite o raio: ");
    scanf("%f", &r);

    printf("Digite a altura: ");
    scanf("%f", &h);

    V = PI * r * r * h;
    ml = V * 1000;

    printf("O volume é: %.2f\n", V);
    printf("Possui %.2f L e em ml = %.2f\n", V, ml);

    
}
