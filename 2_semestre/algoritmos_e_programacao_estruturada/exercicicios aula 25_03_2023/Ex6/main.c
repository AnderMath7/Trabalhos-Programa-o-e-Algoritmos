#include <stdio.h>
#include <stdlib.h>

/* fa�a um programa que  receba como dados 5 n�meros inteiros e mostre como
resultado o maior n�mero digitado.
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
