programa {
  funcao inicio() {

    inteiro original = 123,unidade,dezena,centena

    escreva("digite um número de 3 digitos: ") 
    leia(original)
    
    escreva("NÚMERO ANTES DA INVERSÃO\n")
    escreva(original,"\n")

    centena = original/100
    inteiro resto = original%100
    dezena = resto/10
    unidade = resto%10

    escreva(unidade,dezena,centena)


    
  }
}
