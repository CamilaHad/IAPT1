/*
Algoritmo
Declare
    sb, imposto, salario : num�rico
In�cio
    // ENTRADA
    escreva ("Digite o sal�rio base: ")
    leia (sb)

    // PROCESSAMENTO
    imposto <- sb * 10/100
    salario <- sb - imposto + 50

    // SA�DA
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







