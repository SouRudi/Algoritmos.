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
    
    printf("\nInforme a número da conta que irá depositar: ");
    scanf("%d", &conta);
    printf("\n");
    
    printf("\tConta acessada: %d", conta);
    printf("\n");
    
    printf("\nInforme o valor a depositar: ");
    scanf("%d", &montante);
    
    printf("\n\tFoi depositado R$ %.d na conta: %d.", montante, conta);
    }else{
    
    printf("\t\tAcesso negado");
        
    }
    
    return 0;
}
