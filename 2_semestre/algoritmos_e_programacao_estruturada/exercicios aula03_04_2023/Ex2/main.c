#include <stdio.h>
#include <stdlib.h>

/* Fa�a um programa que receba como dado de entrada v�rios n�meros inteiros e mostre:
a) quantas vezes o programa rodou;
b) Qual foi o maior n�mero digitado; */

int main() {
	int valor=1, count=0, maior=0;
	
	while(valor!=0){
		printf("digite um numero:\npara sair digite[0]");
		scanf("%d",&valor);
		printf("\n");
		count++;
		if(valor>maior){
			maior=valor;
		}
	}
	printf("O programa rodou %d e o maior numero digitado foi %d",count-1,maior);
	
	return 0;
}
