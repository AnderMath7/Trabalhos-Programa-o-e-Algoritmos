#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que receba como dado de entrada 5 números inteiros e mostre como resultado o maior e o menor números
Obs: apenas 4 variaveis */

main() {
	int valor=0, maior=0, menor=999999, count=1;
	
	for(count=1;count<=5;count++){
		printf("Insira um valor: ");
		scanf("%d",&valor);
		
		if(maior<valor){
			maior=valor;
		}
		if(menor>valor){
			menor=valor;
		}	
		system("cls");
	}
	
	printf("maior:%d\nmenor:%d",maior,menor);
	
	return 0;
}
