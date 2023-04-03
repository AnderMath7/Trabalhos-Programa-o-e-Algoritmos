#include <stdio.h>
#include <stdlib.h>
#include "conio2.h"

/* Faça um programa que imprima 6 números inteiros entre 1 e 60, cada um de uma cor */

main() {
	int i=0, count=1;
	
	system("color f4");
	printf("gerando 6 numeros aleatorios:\nDigite qualquer tecla para gerar...\n");
	for(count=1;count<=6;count++){
		textcolor(count);
		printf("%d ", rand() % 60); 
		getch();
	}
	
	return 0;
}
