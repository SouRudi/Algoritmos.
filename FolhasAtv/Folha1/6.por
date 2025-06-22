programa {
  funcao inicio() {

    real x,y,trocar

    escreva("insira o x: ")
    leia(x)


    escreva("insira o y: ")
    leia(y)


    escreva("ANTES DA TROCA \n")

    escreva(x," ",y)

    escreva("\n")

    trocar = x
    x = y
    y = trocar

    escreva("DEPOIS DA TROCA \n")
    
    escreva(x," ",y)
    
  }
}
