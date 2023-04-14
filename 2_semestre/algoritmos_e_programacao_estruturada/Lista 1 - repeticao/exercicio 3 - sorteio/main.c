#include <stdio.h>
#include <stdlib.h>
#include "conio2.h"

/* 3 . Elabore um programa que faça o sorteio de vários números e ao final mostra:
a) A quantidade de números sorteados;
b) O Maior numero sorteado;
c) Quantos números pares foram sorteados;
Observação: O programa deve finalizar quando for sorteado o valor 0 (zero)e utilizar no
máximo 3 variáveis não utilizar vetores ou matrizes. */

//Professor, não consegui achar uma maneira de fazer apenas com 3 variáveis pois, precisa de uma para comparar cada uma das categorias que o senhor colocou
// e outra para guardar os números sorteados para que as outras variaveis possam comparar o conteudo delas com os números.

int main() {
	int x=1, maiorNumero=0, contPares=0, cont=0;
	
	printf("Um novo numero sera sorteado ate que seja sorteado o numero 0: \n");
	while(x!=0){
		x=rand() %100;
		printf("%d ",x);
		sleep(1);

	cont++;
	if(maiorNumero<x){
		maiorNumero=x;
	}
	if(x%2==0){
		contPares++;
	}
	}
	printf("\n\nA quantidade de numeros sorteados foi: %d\n",cont);
	printf("O maior numero foi: %d\n",maiorNumero);
	printf("A quantidade de numeros pares sorteados foi: %d",contPares);
	getch();
	
	return 0;
}
