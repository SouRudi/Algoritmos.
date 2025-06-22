#include <stdio.h>

int main() {
    float reais, dolar, euro, libra;

    printf("Quantos reais quer converter: ");
    scanf("%f", &reais);

    dolar = reais / 5.60;
    euro = reais / 6.40;
    libra = reais / 7.53;

    printf("Dólar: %.2f\n", dolar);
    printf("Euro: %.2f\n", euro);
    printf("Libras: %.2f\n", libra);


}
