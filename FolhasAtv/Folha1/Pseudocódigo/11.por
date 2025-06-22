Algoritmo CalculaConsumoViagem

Início
    // Declaração de variáveis
    Real: tempo, velocidade, distancia, litros_usado

    // Entrada de dados
    Escreva("Informe o tempo gasto na viagem (em horas): ")
    Leia(tempo)

    Escreva("Informe a velocidade média durante a viagem (em km/h): ")
    Leia(velocidade)

    // Processamento
    distancia ← tempo * velocidade
    litros_usado ← distancia / 12

    // Saída de dados
    Escreva("Velocidade média: ", velocidade, " km/h")
    Escreva("Tempo gasto na viagem: ", tempo, " h")
    Escreva("Distância percorrida: ", distancia, " km")
    Escreva("Litros de combustível utilizados: ", litros_usado, " L")

Fim