#include <stdio.h>
#include <stdlib.h>

/* 
	Fa�a um programa que receba como dados de enrada v�rios n�meros inteiros e o programa deve finalizar quando for digitado o valor 0
	
 */

int main() {
	int valor=1;
	
	while(valor!=0){
		printf("Digite um valor: \n");
		printf("Para encerrar digite [0]\n");
		scanf("%d",&valor);
		printf("\n");
		//system("cls");
	}
	
	
	return 0;
}
