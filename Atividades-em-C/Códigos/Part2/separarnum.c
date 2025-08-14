#include <stdio.h>

int main() {
    int num;
 
    printf("Digite um número de cinco dígitos: ");
    scanf("%d", &num);

    printf("Dígitos separados: ");
    printf("%d   ", num / 10000);   
    num %= 10000;
    printf("%d   ", num / 1000);    
    num %= 1000;
    printf("%d   ", num / 100);     
    num %= 100;
    printf("%d   ", num / 10);     
    num %= 10;
    printf("%d  \n", num);        

    return 0;
}
