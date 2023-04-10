#include <stdio.h>
#include <stdlib.h>
#include "resultado.h"
#include "conio2.h"

/* Faça um programa que redceba como dado de entrada o valor de um serviço e mostre como resultado o valor do serviço com 10% de de desconto
Obs.: Ultilizar função em um arquivo .h */

int main() {
	float valor;
	
	printf("Insira o valor do servico: ");
	scanf("%f",&valor);
	resultado(valor);
	getch();
	
	return 0;
}
