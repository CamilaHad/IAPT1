/*
Algoritmo
Declare
    base, altura, area : numérico

Início
    Leia (base)
    Leia (altura)

    area <- (base * altura) / 2

    Escreva (area)
Fim
*/
#include <stdio.h>
int main(){
    float base, altura, area;

    printf("Digite a base..: ");
    scanf("%f", &base);
    printf("Digite a altura: ");
    scanf("%f", &altura);

    area = (base * altura) / 2;

    printf("Area do triangulo: %.3f\n", area);
    return 0;
}
