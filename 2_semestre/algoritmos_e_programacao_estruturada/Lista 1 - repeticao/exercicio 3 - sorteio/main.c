#include <stdio.h>
#include <stdlib.h>
#include "conio2.h"

/* 3 . Elabore um programa que fa�a o sorteio de v�rios n�meros e ao final mostra:
a) A quantidade de n�meros sorteados;
b) O Maior numero sorteado;
c) Quantos n�meros pares foram sorteados;
Observa��o: O programa deve finalizar quando for sorteado o valor 0 (zero)e utilizar no
m�ximo 3 vari�veis n�o utilizar vetores ou matrizes. */

//Professor, n�o consegui achar uma maneira de fazer apenas com 3 vari�veis pois, precisa de uma para comparar cada uma das categorias que o senhor colocou
// e outra para guardar os n�meros sorteados para que as outras variaveis possam comparar o conteudo delas com os n�meros.

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
