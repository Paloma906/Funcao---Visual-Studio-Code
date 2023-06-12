#include <stdio.h>
#include <stdlib.h>


/*O índice de massa corpórea (IMC) de um  indivíduo é obtido dividindo-se o seu peso (em  Kg) por sua altura (em metros) ao quadrado.  
Assim, por exemplo, uma pessoa de 1,67m e  pesando 55kg tem IMC igual a 20,14, já que: 

Escreva um programa que solicite ao utilizador  o fornecimento do seu peso em kg e de sua  altura em m e a partir deles calcule o índice de  massa corpórea do utilizador.



*/
void peso_alturaIndividuo(float n1,float n2){

    float imc;

    printf("Peso: %.2f\n", n1);
    printf("Altura: %.2f\n", n2);

    imc = (n1)/(n2*n2);   // imc = (peso)/altura*altura

    printf("IMC : %.2f",imc);
}

int main(){

    float peso;
    float altura;

    printf("Digite o seu peso: ");
    scanf("%f", &peso);

    printf("Digite a altura: ");
    scanf("%f", &altura);

    peso_alturaIndividuo(peso,altura);
    
}
