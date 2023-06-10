#include <stdio.h>
#include <stdlib.h>

/* Fazer um programa em C que pergunta um valor em  metros e imprime o correspondente em centímetros.*/

void valorMetros(float valor1)
{
    float valorCentimetro;

    valorCentimetro = valor1 * 100;
    system("cls");
    printf("valor em metros: %.0f\n", valor1);
    printf("Valor em centimetro: %.0f\n", valorCentimetro);
}
int main()
{

    float valor;

    printf("Digite o valor em metros:");
    scanf("%f", &valor);

    valorMetros(valor);
}