#include <stdio.h>

int main()
{
     int num1;
     int num2;
     
     printf("Digite o primeiro numero: ");
     scanf("%d", &num1);
     
     printf("Digite o segundo numero: ");
     scanf("%d", &num2);
     
     printf("----------------------------------------\n");
     
     int soma = num1 + num2;
     int subtracacao = num1 - num2;
     float divisao = num1/num2;
     float resto = num1 % num2;
     int multiplicacao = num1* num2;
     
     
     printf("A soma entre esses numeros e: %d\n", soma);
     printf("A subtracacao entre esses numeros e: %d\n", subtracacao);
     printf("A divisao entre esses numeros e: %.0f\n", divisao);
     printf("A resto entre esses numeros e: %.2f\n", resto);
     printf("A multiplicacao entre esses numeros e: %d\n", multiplicacao);
     
     return 0;
}
