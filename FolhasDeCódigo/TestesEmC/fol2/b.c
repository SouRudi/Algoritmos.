#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL,"Portuguese");


    char nome[50],sobrenome[50],trocar[50]="";

    printf("Insira seu pré-nome: ");
    scanf("%s", nome);

    printf("Insira seu sobrenome: ");
    scanf("%s", sobrenome);

    printf("É a vez do: %s %s\n", nome, sobrenome);

    strcpy(trocar, nome);
    strcpy(nome, sobrenome);
    strcpy(sobrenome, trocar);

    printf("%s %s\n", nome, sobrenome);




}
