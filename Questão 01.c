#include <stdio.h>

int main() {

    float lado;
    float area;
    float dobro_area;

    printf("Digite o valor do lado do quadrado: ");
    scanf("%f", &lado);

    area = lado * lado;
    dobro_area = 2 * area;

    printf("Área do quadrado: %.2f\n", area);
    printf("Dobro da área: %.2f\n", dobro_area);

    return 0;
}
