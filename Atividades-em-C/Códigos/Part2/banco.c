#include <stdio.h>

int main() {

    int short idade;
    int montante;
    int long conta;

    printf("Informe sua idade: ");
    scanf("%d", &idade);
    printf("\n");

    if(idade >= 18 && idade <100){

    printf("\t\tAcesso concedido!\n");

    printf("\nInforme o número da conta que irá depositar: ");
    scanf("%d", &conta);
    printf("\n");

    if(conta > 0){

    printf("\tConta acessada: %.6d", conta);
    printf("\n");

    printf("\nInforme o valor a depositar: ");
    scanf("%d", &montante);

    printf("\n\tFoi depositado R$ %.d na conta: %.6d.", montante, conta);
    }else{

    printf("\t\tAcesso negado");
    }

    }else{

    printf("\t\tAcesso negado");
    }

    return 0;
}
