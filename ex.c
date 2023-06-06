#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void calcularSoma(int numeroUm, int numeroDois)
{
    int soma;
    soma = numeroUm + numeroDois;
    printf("Soma: %d \n", soma);    // printf("Soma \"SENAI\": %d \n,soma");
}

int main()
{
    setlocale(LC_ALL, "portuguese");

    int primeiroNumero, segundoNumero;

    printf("Digite o primeiro numero:");
    scanf("%d", &primeiroNumero);

    printf("Digite o segundo numero:");
    scanf("%d", &segundoNumero);

    calcularSoma(primeiroNumero, segundoNumero);

    return 0;
}
