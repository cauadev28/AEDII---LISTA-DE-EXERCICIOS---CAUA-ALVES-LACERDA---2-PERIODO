#include <stdio.h>
#include <math.h>

int main() {
    double num1, num2;
    
    printf("Por favor, insira o primeiro número real: ");
    scanf("%lf", &num1);
    printf("Agora, insira o segundo número real: ");
    scanf("%lf", &num2);
    
    double dobroNum1 = 2 * num1;
    double produtoDobro = dobroNum1 * num1;
    double triploNum1 = 3 * num1;
    double metadeNum2 = num2 / 2;
    double somaTriploMetade = triploNum1 + metadeNum2;
    double somaNum1Num2 = num1 + num2;
    double raizQuadrada = sqrt(somaNum1Num2);
    
    printf("O produto do dobro do primeiro número é: %.2lf\n", produtoDobro);
    printf("A soma do triplo do primeiro número com a metade do segundo número é: %.2lf\n", somaTriploMetade);
    printf("A raiz quadrada da soma dos dois números é: %.2lf\n", raizQuadrada);
    
    return 0;
}
