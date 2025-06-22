
#include <stdio.h>

int main() {
    float tempo, velocidade, distancia, litros_usado;

    printf("Informe o tempo gasto na viagem (em horas): ");
    scanf("%f", &tempo);

    printf("Informe a velocidade média durante a viagem (em km/h): ");
    scanf("%f", &velocidade);

    distancia = tempo * velocidade;
    litros_usado = distancia / 12;

    printf("Velocidade média: %.2f km/h\n", velocidade);
    printf("Tempo gasto na viagem: %.2f h\n", tempo);
    printf("Distância percorrida: %.2f km\n", distancia);
    printf("Litros de combustível utilizados: %.2f L\n", litros_usado);

    return 0;
}
