/*
Pedro comprou um saco de ração com peso em quilos. Pedro possui dois gatos para os quais fornece a
quantidade de ração em gramas. Faça um algoritmo que receba o peso do saco de ração e a quantidade
de ração fornecida para cada gato. Calcule e mostre quanto restará de ração no saco após 5 dias.

Algoritmo
Declare
    peso, gato1, gato2, consumo, sobra : numérico

Início
    Leia (peso)
    Leia (gato1)
    Leia (gato2)

    gato1 <- gato1 / 1000
    gato2 <- gato2 / 1000

    consumo <- (gato1 + gato2) * 5

    sobra <- peso - consumo

    Escreva (sobra)
Fim
*/

#include <stdio.h>
int main(){
    float peso, gato1, gato2, consumo, sobra;

    scanf("%f %f %f", &peso, &gato1, &gato2);

    gato1 = gato1 / 1000.0;
    gato2 = gato2 / 1000.0;
    consumo = (gato1 + gato2) * 5;
    sobra = peso - consumo;

    printf("%.2f\n", sobra);
}
