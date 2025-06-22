Algoritmo InverterNumero3Digitos

Início
    // Declaração de variáveis
    Inteiro: original, unidade, dezena, centena, resto

    // Entrada de dados
    Escreva("Digite um número de 3 dígitos: ")
    Leia(original)

    // Exibição antes da inversão
    Escreva("NÚMERO ANTES DA INVERSÃO")
    Escreva(original)

    // Processamento
    centena ← original / 100
    resto ← original % 100
    dezena ← resto / 10
    unidade ← resto % 10

    // Saída invertida
    Escreva(unidade, dezena, centena)

Fim