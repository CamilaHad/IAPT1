/*
Construir um algoritmo que recebe 4 números, calcula e mostra a soma desses números.

Algoritmo
Declare
    n1, n2, n3, n4 : numérico
    soma : numérico
Início
    Leia(n1, n2, n3, n4)

    soma <- n1 + n2 + n3 + n4

    Escreva (soma)
Fim
*/

#include <stdio.h>

int main(){

    /*DECLARE*/
    float n1, n2, n3, n4, soma;

    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    soma = n1 + n2 + n3 + n4;

    printf("%.3f\n", soma);
}
