/*
Construir um algoritmo que recebe um salário de um funcionário e o percentual de aumento, calcule e mostre o valor do aumento e o novo salário.

Algoritmo
Declare
    salario, percentual, aumento, novo : numérico

Início
    Leia (salario)
    Leia (percentual)

    aumento <- salario * percentual / 100
    novo <- salario + aumento

    escreva (aumento)
    escreva (novo)
Fim
*/

#include <stdio.h>

int main(){
    float salario, percentual, aumento, novo;

    scanf("%f", &salario);
    scanf("%f", &percentual);

    aumento = salario * percentual / 100;
    novo = salario + aumento;

    printf("%.2f\n", aumento);
    printf("%.2f\n", novo);
}
