#include <stdio.h>

int main() {
    const float premio = 780000.0;
    float c1, c2, c3;

    c1 = premio * 0.46;
    c2 = premio * 0.32;
    c3 = premio * 0.22;

    printf("O prêmio do 1º: %.2f\n", c1);
    printf("O prêmio do 2º: %.2f\n", c2);
    printf("O prêmio do 3º: %.2f\n", c3);

    return 0;
}
