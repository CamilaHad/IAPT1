/*
Algoritmo
Declare
    anoNascimento : num�rico
    idade : num�rico
In�cio
    Escreva("Informe ano de nascimento: ")
    Leia (anoNascimento)

    idade <- 2019 - anoNascimento

    escreva ("Idade: ", idade)
Fim
*/









#include <stdio.h>
int main(){
    int anoNascimento, idade;

    printf("Informe ano de nascimento: ");
    scanf("%d", &anoNascimento);

    idade = 2019 - anoNascimento;

    printf("Idade: %d\n", idade);
}

