/*
Algoritmo
Declare
    cavalos : numérico
    ferraduras : numérico
Início
    Leia (cavalos)

    ferraduras <- cavalos * 4

    Escreva (ferraduras)
Fim
*/
#include <stdio.h>
int main(){
    int cavalos, ferraduras;

    printf("Informe quantidade de cavalos: ");
    scanf("%d", &cavalos);

    ferraduras = cavalos * 4;

    printf("Sao necessarias %d ferraduras. \n", ferraduras);
    return 0;
}
