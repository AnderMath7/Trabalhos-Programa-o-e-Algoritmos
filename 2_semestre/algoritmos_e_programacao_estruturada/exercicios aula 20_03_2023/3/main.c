//Fa�a um prograna que receba como dados de entrada 5 n�meros inteiros. Obs.: O programa s� pode ter duas v�riaveis.

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
