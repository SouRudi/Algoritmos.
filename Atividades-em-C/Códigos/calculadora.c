#include <stdio.h>

int soma(a,b);
int sub(a,b);

int main()
{
    int num1, num2, result;

    printf("digite o 1º numero: \n");
    scanf("%d", &num1);
    printf("digite o 2º numero: \n");
    scanf("%d", &num2);
    int soma = num1 + num2;
    printf("eh: %d", soma);

    return 0;
}
