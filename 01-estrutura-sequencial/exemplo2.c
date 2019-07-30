/*
Construir um algoritmo que calcule a média aritmética de 3 números 
quaisquer.

---------------------------------------------------------

Algoritmo
Declare
    numero1 : numérico
    numero2 : numérico
    numero3 : numérico
    media : numérico
Início
    Leia (numero1)
    Leia (numero2)
    Leia (numero3)

    media <- (numero1 + numero2 + numero3) / 3

    Escreva (media)
Fim

 */
#include <stdio.h>
int main(){

    float numero1, numero2, numero3, media;

    scanf("%f %f %f", &numero1, &numero2, &numero3);

    media = (numero1 + numero2 + numero3) / 3;

    printf("%.2f\n", media);
}