#include <stdio.h>

int main()
{
    float far;

    printf("Digite a temperatura em Fahrenheit \n");
    scanf("%f",&far);

    float cel= ((far-32)*5) /9;

    printf("A temperatura em Celsuis e: %.2f\n",cel);

    return 0;
}
