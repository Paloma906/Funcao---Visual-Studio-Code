#include <stdio.h>
#include <stdlib.h>

/*Fazer um programa em C que lê o preço de um produto e inflaciona esse preço em 10% se ele for menor que 100 e em 20%
se ele for maior ou  igual a 100.
*/

void calculaPreco(float valor)
{

    float precoProduto;

    if (valor < 100)
    {
        precoProduto = valor + (valor * 0.1); // inflacao 10%
    }
    else 

    {
        precoProduto = valor + (valor * 0.2);   // inflacao 20%
    }

    printf("O preco do produto inflacionado foi: %.0f", precoProduto);
}

int main()
{

    float preco;

    printf("Digite o preco do produto:");
    scanf("%f", &preco);

    calculaPreco(preco);

    return 0;
}