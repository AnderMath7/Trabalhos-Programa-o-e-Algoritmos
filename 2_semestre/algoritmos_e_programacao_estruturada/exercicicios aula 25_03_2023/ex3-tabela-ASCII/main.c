#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Faça um programa que imprima na tela a tabela ASC2 */

main() {
	setlocale(LC_ALL, "portuguese");
	int count, valor;
	system("color");
	
	for(count=1;count<255;count++){
		printf("%d é o caracter %c\n",count, count);
		//sleep(1);
	}
	
	return 0;
}
