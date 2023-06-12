#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Usando funções, crie um algoritmo que leia 3 disciplinas e 2 notas para cada uma delas.
[ 1 ] – Mostrar nome da disciplina e a média;
[ 2 ] – O nome da disciplina e a situação (aprovado, reprovado ou recuperação);
[ 3 ] – Exibir todas as informações;
[ 0 ] – Sair do programa.

• Utilize o switch-case.
• Verifique cada nota, impedindo que o programa continue caso a nota informada seja maior que 10 ou menor que 0;
*/
void disciplina_nota(char d, float n){
    char disciplina;
    float nota;
    printf("Disciplina: %s",disciplina);
    printf("Nota: %f",nota);


}

void mostrarSituacao(float media[])
{
    int i;
    for (i = 0; i < 3; i++)
    {
        if (media >= 5 && media < 7)
        {
            printf("Recuperacao!:\n");
        }
        else if (media < 5)
        {
            printf("Reprovado!:\n");
        }

        if (media > 7)
        {
            printf("Aprovado!:\n");
        }
    }
}
    void main()

    char nome[3][250];
    char disciplina[3];
    float nota[3][2];
    float media[3];
    char opcao;
    int i,j;

    printf("1 - Mostrar nome da disciplina e a media:\n");
    printf("2 - O nome da disciplina e a situação (aprovado, reprovado ou recuperação:\n");
    printf("3 - Exibir todas as informações:\n");
    printf("0 - Sair do programa:\n");
    printf("Digite a opcao deseja:\n");

    for (i = 0; i < 3; i++)
    {
        printf("Digite a disciplina: ");
        gets(disciplina[i]);

        for (j = 0; j < 2; j++)
        {
            printf("Digite a nota: ");
            scanf("%f", &nota[i][j]);
            soma += nota[i][j];
        }

        media[i] = soma / j
       
    }

    mostrarSituacao(media);
    disciplina_nota(disciplina,nota);

   
    printf("Digite a opcao que deseja:");
    scanf("%s", opcao);

    scanf("%s", opcao);

    switch (opcao)
    {
    case 1:
        printf("Nome da disciplina: %s", disciplina[i]);
        printf("Media: %f", media[i]);
        break;

    case 2:
        printf("Nome da disciplina: %s", disciplina[i]);
        printf("Situacao: %f", media[i]);
        break;

    case 3:
        printf("Nome:%s\n", nome);
        printf("Disciplinas: %s\n", disciplina[i]);
        printf("Notas: %f\n", nota[i][j]);
        printf("Situacao: %s", media[i]);
        break;

    case 4:
        printf("Sair do programa!");
        break;

    default:
        printf("Opcao incorreta!")

            sleep(5);
        system("cls");
    }