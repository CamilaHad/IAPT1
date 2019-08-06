/*
Algoritmo
Declare
    sb, imposto, salario : numérico
Início
    // ENTRADA
    escreva ("Digite o salário base: ")
    leia (sb)

    // PROCESSAMENTO
    imposto <- sb * 10/100
    salario <- sb - imposto + 50

    // SAÍDA
    escreva("Salario liquido: ", salario)

Fim
*/

#include <stdio.h>
int main(){
    double sb, imposto, salario;
    printf("Digite salario base: ");
    scanf("%lf", &sb);


    imposto = sb * 0.1;
    salario = sb - imposto + 50;


    //salario = sb * 0.9 + 50;

    printf("Salario liquido: %.2f\n", salario);
}







