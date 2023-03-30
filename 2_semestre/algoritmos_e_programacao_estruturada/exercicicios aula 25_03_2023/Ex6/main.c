#include <stdio.h>
#include <stdlib.h>

/* faça um programa que  receba como dados 5 números inteiros e mostre como
resultado o maior número digitado.
Obs: Utilizar apenas 3 variaveis */

int main() {
	int valor, maior, count;
	
	for(count=1;count<=5;count++){
		printf("insira um valor: ");
		scanf("%d",&valor);
		if(valor>maior){
			maior=valor;
		}
	}
	printf("O maior valor digitado foi %d",maior);
	
	return 0;
}
