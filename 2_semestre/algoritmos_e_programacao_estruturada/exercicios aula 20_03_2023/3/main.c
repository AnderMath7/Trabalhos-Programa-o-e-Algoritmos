//Faça um prograna que receba como dados de entrada 5 números inteiros. Obs.: O programa só pode ter duas váriaveis.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "portuguese");
	int count, numero;

	for(count=1;count<=5;count++){
		printf("Insira um valor: ");
		scanf("%d",&numero);
	}
	
}
