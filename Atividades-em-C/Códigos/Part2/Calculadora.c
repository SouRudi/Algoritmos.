#include <stdio.h>


int main(){

    float num1, num2; 
    char ver;
    
    printf("Oque deseja fazer? \n 1.Soma\n 2.Subtração\n 3.Multiplicação\n 4.Divisão\n");
    printf("\t--------------->\t");
    scanf("%c", &ver);
    
    if(ver >= '1' && ver <= '4'){
    
    printf("\nInsira o primeiro número: ");
    scanf("%f", &num1);
    printf("Insira o segundo número: ");
    scanf("%f", &num2);
    
    
    
    if(ver == '1'){
        //soma
        printf("\nA soma entre o %.0f e %.0f é: %.0f", num1, num2, num1 + num2);
    }if(ver == '2'){
        //sub
        printf("\nA subtração entre o %.0f e %.0f é: %.0f", num1, num2, num1 - num2);
    }if(ver == '3'){
        //mult
        printf("\nA soma entre o %.0f e %.0f é: %.0f", num1, num2, num1 * num2);
    }if(ver == '4'){
        //div
        printf("\nA divisao entre %.0f e %.0f é: %.1f", num1, num2, num1 / num2);
    }
    }else{
        printf("Digito inválido");
    }


    
}
