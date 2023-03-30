#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que receba como dado de entrada um número inteiro 
e imprima na tela em ordem decrescente os valores do número digitado até 0
Obs: utilizar apenas 2 váriaveis */

main() {
	int valor=0, count=0;
	
	system("color e5");
	printf("Digite os segundos que voce quer: ");
	scanf("%d",&valor);
	system("cls");
	
	count=valor;
	for(count=valor;count>=0;count--){
		printf("%d",count);
		sleep(1);
		system("cls");
	}
	printf("\a"); sleep(1);
	printf("\a"); sleep(1);
	printf("\a"); sleep(1);
	printf("Comida pronta!!");
	
	return 0;
}
