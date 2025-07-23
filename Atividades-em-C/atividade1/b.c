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
     
     int sm = num1 + num2;
     int sub = num1 - num2;
     float div = num1/num2;
     float res = num1 % num2;
     int mult = num1* num2;
     
     
     printf("A soma entre esses numeros e: %d\n", sm);
     printf("A subtracacao entre esses numeros e: %d\n", subt);
     printf("A divisao entre esses numeros e: %.0f\n", divi);
     printf("A resto entre esses numeros e: %.2f\n", res);
     printf("A multiplicacao entre esses numeros e: %d\n", mult);
     
     return 0;
}
