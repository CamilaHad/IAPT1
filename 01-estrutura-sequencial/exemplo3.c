/*
Construir um algoritmo que receba um valor e adicione a esse a esse valor 25%.

Algoritmo
Declare
    valor : numérico
    aumento : numérico
    acrescido : numérico
Início
    Leia (valor)

    aumento <- valor * 25 / 100
    acrescido <- valor + aumento

    Escreva (acrescido)
Fim
*/

#include <stdio.h>

int main(){
    /*DECLARE*/
    float valor, aumento, acrescido;

    scanf("%f", &valor);

    aumento = valor * 25 / 100.0;
    acrescido = valor + aumento;

    printf("%.2f\n", acrescido);
}
