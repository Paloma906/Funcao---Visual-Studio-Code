#include <stdio.h>
#include <stdlib.h>
#include <time.h> // para uso do sleep(s)
#include <locale.h>

void main()
{

    setlocale(LC_ALL, "Portuguese");

    char nome[250] = "Marta";
    int idade = 25;
    int opcao;

    do
    {
        printf("1 - Mostrar nome: \n");
        printf("2 - Mostrar idade: \n");
        printf("3 - Mostrar nome e idade: \n");
        printf("0 - Sair do programa: \n");

        printf("Informe a opcao desejada :");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("Nome: %s \n", nome);
            break;
        case 2:
            printf("Idade: %d \n", idade);
            break;
        case 3:
            printf("Nome: %s \n", nome);
            printf("Idade: %d \n", idade);
            break;
        case 0:
            printf("Saindo do programa... \n");
            break;
        default:
            printf("OpcÃ£o incorreta \n");
            
        }

        sleep(5);      // Espera 5 segundos.
        system("cls"); // limpa a tela

    } while (opcao != 0);
}
