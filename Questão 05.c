#include <stdio.h>

int main() {

    float custoFabrica, custoDistribuidor, custoImpostos, custoFinal;

    printf("Digite o custo de fábrica do carro: R$ ");
    scanf("%f", &custoFabrica);

    custoDistribuidor = custoFabrica * 0.28;
    custoImpostos = custoFabrica * 0.45;
    custoFinal = custoFabrica + custoDistribuidor + custoImpostos;

    printf("O valor final a ser pago pelo consumidor é: R$ %.2f\n", custoFinal);

    return 0;
}
