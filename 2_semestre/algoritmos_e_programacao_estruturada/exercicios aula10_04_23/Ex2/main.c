#include <stdio.h>
#include <stdlib.h>
#include "resultado.h"
#include "conio2.h"

/* Fa�a um programa que redceba como dado de entrada o valor de um servi�o e mostre como resultado o valor do servi�o com 10% de de desconto
Obs.: Ultilizar fun��o em um arquivo .h */

int main() {
	float valor;
	
	printf("Insira o valor do servico: ");
	scanf("%f",&valor);
	resultado(valor);
	getch();
	
	return 0;
}
