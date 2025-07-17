#include <stdio.h>

int main()
{
    int num, result;

    printf("Digita o numero: ");
    scanf("%d", &num);

    result = num%2;

    if(result == 0){

    printf("eh par");

    }else
    {

    printf("impar");

    }
    return 0;
}
