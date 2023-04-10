#include <stdio.h>
#include <stdlib.h>
#include "calc.h"

/* Faça um programa em que o usuário irá escolher uma das 4 operações aritméticas e também terá a opção de sair do programa quando digitar 0
ao final informar quantas vezes o programa rodou e a cada rodada mostrar a opção escolhida pelo usuário.
Obs: ultilizar função.
 */

int main() {
	int count=0, operacao=-5;
	float valor1, valor2;
	
	while(operacao!=0){
		printf("CALCULADORA\n\n");
		printf("Digite:\n[1] Soma\n[2] Subtracao\n[3] Multiplicacao\n[4] Divisao\n[0] Para sair\n\n");
		scanf("%d",&operacao);
		
		if(operacao!=0){
			count++;
			printf("CALCULADORA\n\n");
			system("cls");
			printf("Digite o primeiro valor: ");
			scanf("%f",&valor1);
			system("cls");
			printf("Digite o segundo valor: ");
			scanf("%f",&valor2);
			calc(operacao, valor1, valor2);
			getch();
			system("cls");
		}
	}
	system("cls");
	printf("\nO programa rodou %d vezes",count);
	getch();
	
	return 0;
}
