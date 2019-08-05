Algoritmo
Declare
    x, y, z, m : numérico

Início
    Leia (x, y, z)

    m <- ( (x * 5) + (y * 7) + (z * 3) ) / (5 + 7 + 3)

    Escreva (m)
Fim

------------------------------------------
Algoritmo
Declare
    x, y, z, m : numérico
Início
    Leia (x, y, z);

    x <- x * 5
    y <- y * 7
    z <- z * 3

    m <- x + y + z

    m <- m / (5+7+3)

    Escreva (m)
Fim

--------------------------------------------
Algoritmo
Declare
    n1, n2, n3, prodN1, prodN2, prodN3, somaProdutos, somaPesos, media : numérico
Início
    Escreva("Informe nota 1: ")
    Leia (n1)
    Escreva("Informe nota 2: ")
    Leia (n2)
    Escreva("Informe nota 3: ")
    Leia (n3)

    prodN1 <- n1 * 5
    prodN2 <- n2 * 7
    prodN3 <- n3 * 3

    somaProdutos <- prodN1 + prodN2 + prodN3
    somaPesos <- 5 + 7 + 3

    media <- somaProdutos / somaPesos

    Escreva("A média do aluno é: ", media)
Fim
