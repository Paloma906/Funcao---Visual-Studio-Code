#include <stdio.h>
#include <stdlib.h>

/*• Escreva um programa que permita ler 3 notas de um aluno e informe por meio de  funções:
• A média;
• Com base na média, se o aluno está aprovado ou reprovado. • Critério para aprovação: média 7,0.*/

void Calcularmedia(float n1, float n2, float n3){
float media;
system("cls");
media = (n1 + n2 + n3) / 3;
printf("NOTA 1: %.2f\n",n1);
printf("NOTA 2: %.2f\n",n2);
printf("NOTA 3: %.2f\n",n3);
printf("MEDIA: %.2f\n",media);

        if (media >= 7)
{

    printf("O ALUNO ESTA APROVADO!");
}
else
{
    printf("O ALUNO ESTA REPROVADO!");
}

}
int main()
{

    float primeiraNota, segundaNota, terceiraNota;

    printf("Digite a primeira nota: ");
    scanf("%f", &primeiraNota);

    printf("Digite a segunda nota: ");
    scanf("%f", &segundaNota);

    printf("Digite a terceira nota: ");
    scanf("%f", &terceiraNota);

    Calcularmedia(primeiraNota, segundaNota, terceiraNota);
}