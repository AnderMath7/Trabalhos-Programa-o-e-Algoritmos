#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que receba como dado de entrada o valor de 5 vendas e mostre como resultado:
a) Quantas venda foram maiores que 500;
b) Qual foi a média das vendas;
Obs: Utilizar no máximo 4 variáveis e não utilizar vetor. */

main() {
	int maior=0, count=1;
	float venda=0, media=0;
	
	for(count=1;count<=5;count++){
		printf("Qual foi o valor da venda: ");
		scanf("%d",&venda);
	
		media=media+venda;
		
		if(venda>500){
			maior++;
		}
	}
	
	printf("O numero de vendas maior que 500 foi: %d\n",maior);
	printf("A media de vendas foi: %.2f",media);
	
	return 0;
}
