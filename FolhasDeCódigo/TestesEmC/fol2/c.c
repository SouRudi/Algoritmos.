#include <stdio.h>
#include <math.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL,"Portuguese");

    int n1,n2;


    printf("CALCULADORA SIMPLES\n");

    printf("digite o 1º número: ");
    scanf("%d\n",&n1);


    printf("digite o 2º número: ");
    scanf("%d \n",&n2);
.
    int sm = n1 + n2;
    int sb = n1 - n2;
    int m = n1 * n2;
    int r = n1 % n2;
    int q = n1 / n2;

    printf("a soma = %d \n", sm);
    printf("a subtração = %d \n", sb);
    printf("a multiplicação = %d \n", m);
    printf("o resto = %d \n", r);
    printf("a divisão = %d \n", q);






}
