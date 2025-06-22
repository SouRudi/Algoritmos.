#include <stdio.h>

int main() {
    float reais = 60000;
    float gastoUSD = 4095 * 5.60;
    float gastoEUR = 4500 * 6.40;
    float gastoGBP = 8500 * 7.53;

    printf("SALDO QUANDO PARTIU DO BRASIL (EM REAIS): %.2f\n\n", reais);

    reais = reais - (gastoUSD + gastoEUR + gastoGBP);

    printf("SALDO QUANDO CHEGOU NO BRASIL (EM REAIS): %.2f\n", reais);

  
}
