/*
Algoritmo
Declare
    hora, minuto, segundo : numerico

Início
    Leia (hora, minuto)

    segundo <- minuto * 60 + hora * 3600

    Escreva (segundo)
Fim
*/
#include <stdio.h>
int main(){
    int hora, minuto, segundo;

    printf("Informe hora e minutos (HH:MM): ");
    scanf("%d:%d", &hora, &minuto);

    segundo = minuto * 60 + hora * 3600;

    printf("Segundos passados do dia: %d segundos\n\n", segundo);
    return 0;
}
