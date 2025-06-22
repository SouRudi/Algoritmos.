programa {
  funcao inicio() {

    real tempo,velocidade,distancia,litros_usado

    escreva("Informe o tempo gasto na viagem(em hora): ")
    leia(tempo)
    escreva("Informe a velocidade média durante a viagem(em hora): ")
    leia(velocidade)

    distancia = tempo*velocidade
    litros_usado = distancia/12

    escreva("Velocidade média: ",velocidade,"km/h")
    escreva("Tempo gasto na viagem: ",tempo,"h")
    escreva("Distancia pecorrida: ",distancia,"km")
    escreva("Litros de combustível utilizados: ",litros_usado,"L")
    
  }
}
