#include <stdio.h>

int main() {

    float pesoPescado;
    float excesso;
    float multa;
    const float LIMITE_PESO = 50.0;
    const float VALOR_MULTA_POR_KG = 4.0;
    
    printf("Digite a quantidade de peixe pescado hoje (em kg): ");
    scanf("%f", &pesoPescado);
    
    if (pesoPescado > LIMITE_PESO) {
        excesso = pesoPescado - LIMITE_PESO;
        multa = excesso * VALOR_MULTA_POR_KG;
        
        printf("Você pescou %.2f kg acima do limite permitido.\n", excesso);
        printf("O valor da multa a ser pago é de R$ %.2f.\n", multa);
    } else {
        printf("Você não excedeu o limite de peso. Sem multa.\n");
    }
    
    return 0;
}
