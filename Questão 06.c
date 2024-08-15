#include <stdio.h>

int main() {
    float tempoHoras;        
    float velocidadeKmPorHora; 
    float distanciaKm;       
    float litrosGasolina;    
    const float eficienciaKmPorLitro = 12.0;

    printf("Digite o tempo gasto na viagem (em horas): ");
    scanf("%f", &tempoHoras);
    printf("Digite a velocidade média (em quilômetros por hora): ");
    scanf("%f", &velocidadeKmPorHora);

    distanciaKm = tempoHoras * velocidadeKmPorHora;
    litrosGasolina = distanciaKm / eficienciaKmPorLitro;

    printf("A quantidade de litros de gasolina utilizada na viagem é: %.2f\n", litrosGasolina);

    return 0;
}
