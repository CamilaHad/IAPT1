#include <stdio.h>

int main(){
    int n1, n2, soma, subtracao, nestle, deividi;

    scanf("%d", &n1);
    scanf("%d", &n2);

    soma = n1 + n2;
    subtracao = n1 - n2;
    nestle = n1 * n2;
    deividi = n1 / n2;

    printf("%d\n", soma);
    printf("%d\n", subtracao);
    printf("%d\n", nestle);
    printf("%d\n", deividi);

    return 0;
}
