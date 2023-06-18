#include <stdio.h>
#include <stdlib.h>

// Usando funções, crie um algoritmo que leia 3 disciplinas e 2 notas para cada uma delas.
//[ 1 ] – Mostrar nome da disciplina e a média; [ 2 ] – O nome da disciplina e a situação (aprovado, reprovado ou recuperação);
//[ 3 ] – Exibir todas as informações; [ 0 ] – Sair do programa.

// Utilize o switch-case.
// • Verifique cada nota, impedindo que o programa continue caso a nota informada seja maior que 10 ou menor que 0;

void mostrarSituacao(float media)
{
    if (media < 5)
    {
        printf("Reprovado!\n");
    }
    else if (media >= 5 && media < 7)
    {
        printf("Recuperação\n");
    }
    else if (media >= 7)
    {
        printf("Aprovado!\n");
    }
}

void disciplina_notas(char disciplina[], float notas[])
{
    printf("Disciplina: %s\n", disciplina);
    printf("Nota 1: %.2f\n", notas[0]);
    printf("Nota 2: %.2f\n", notas[1]);
}


int main()
{
    int opcao, i, j;
    char disciplina[3][250];
    float notas[3][2];
    float media[3];
    float soma;

    // Leitura das disciplinas e notas
    for (i = 0; i < 3; i++)
    {
        soma = 0;
        printf("Digite o nome da disciplina %d: ", i + 1);
        scanf("%s", disciplina[i]);

        for (j = 0; j < 2; j++)
        {
            do
            {
                printf("Digite a nota %d para a disciplina %d: ", j + 1, i + 1);
                scanf("%f", &notas[i][j]);

                // Verificação da nota
                if (notas[i][j] < 0 || notas[i][j] > 10)
                {
                    printf("Nota inválida! Digite novamente.\n");
                }
            } while (notas[i][j] < 0 || notas[i][j] > 10);

            soma += notas[i][j];
        }

        media[i] = soma / 2;
    }

    do
    {
        printf("\nDigite a opcao desejada:\n");
        printf("[1] - Mostrar nome da disciplina e a media\n");
        printf("[2] - Mostrar nome da disciplina e a situacao (aprovado, reprovado ou recuperacao)\n");
        printf("[3] - Exibir todas as informacoes\n");
        printf("[0] - Sair do programa\n");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            for (i = 0; i < 3; i++)
            {
                printf("Nome da disciplina: %s\n", disciplina[i]);
                printf("Media: %.2f\n", media[i]);
            }
            break;

        case 2:
            for (i = 0; i < 3; i++)
            {
                printf("Nome da disciplina: %s\n", disciplina[i]);
                printf("Situacao: ");
                mostrarSituacao(media[i]);
            }
            break;

        case 3:
            for (i = 0; i < 3; i++)
            {
                disciplina_notas(disciplina[i], notas[i]);
                printf("Media: %.2f\n", media[i]);
            }
            break;

        case 0:
            printf("Saindo do programa!\n");
            break;

        default:
            printf("Opcao invalida! Digite novamente.\n");
            break;
        }
    } while (opcao != 0);

    return 0;
}
