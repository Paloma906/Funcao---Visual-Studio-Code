#include <stdio.h>
#include <stdlib.h>

// Crie uma função em linguagem C que receba 2 números e retorne o maior 

void maiorNumero(int n1, int n2){
	int maior;
	
	if(n1 > n2){
		maior = n1;
	}else {
		maior = n2;
	}
	
	printf("MAIOR NUMERO: %d",maior);
}

int main(){
	
	int primeiroNumero,segundoNumero;
	
	printf("Digite o primeiro numero:");
	scanf("%d",&primeiroNumero);
	
	printf("Digite o segundo numero:");
	scanf("%d",&segundoNumero);
	
	maiorNumero(primeiroNumero,segundoNumero);
	
	return 0;
}
