#include <stdio.h>
#include <stdlib.h>

void maiorNumero(int n1,int n2){
	int maior;
	if(n1>n2){
		maior = n1;
	}else{
		maior = n2;
	}
	
	printf("Maior: %d \n", maior);
	
}

void menorNumero(int n1, int n2){
	int menor;
	if(n1 < n2){
		menor = n1;
	}else {
		menor = n2;
	}
	
	printf("Menor: %d \n",menor);
}

int main(){
	int primeiroNumero,segundoNumero;
	
	printf("Digite o primeiro numero: ");
	scanf("%d",&primeiroNumero);
	
	printf("Digite o segundo numero: ");
	scanf("%d",&segundoNumero);
	
	maiorNumero(primeiroNumero,segundoNumero);
	menorNumero(primeiroNumero,segundoNumero);
	
	return 0;
	
	
}
