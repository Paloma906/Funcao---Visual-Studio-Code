#include <stdio.h>
#include <stdlib.h>

//Crie uma função em linguagem C que receba 2 números e retorne o menor valor.

void menorNumero(int n1, int n2){
	int menor;
	
	if(n1<n2){
		menor = n1;
	}else{
		menor = n2;
	}
	
	printf("MENOR NUMERO: %d",menor);
}

int main(){
	
	int primeiroNumero,segundoNumero;
	
	printf("Digite o primeiro numero:");
	scanf("%d",&primeiroNumero);
	
	printf("Digite o segundo numero:");
	scanf("%d",&segundoNumero);
	
	menorNumero(primeiroNumero,segundoNumero);
	
	return 0;
}

