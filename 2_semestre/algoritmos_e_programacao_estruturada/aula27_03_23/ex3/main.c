#include <stdio.h>
#include <stdlib.h>

/* Fa�a um programa que receba como dado de entrada o valor de 5 vendas e mostre como resultado:
a) Quantas venda foram maiores que 500;
b) Qual foi a m�dia das vendas;
Obs: Utilizar no m�ximo 4 vari�veis e n�o utilizar vetor. */

main(){
	int maior=0, count=1;
	float media, venda;
	
	for(count=1;count<=5;count++){
		printf("Valor da venda: ");
		scanf("%f",&venda);
		
		if(venda>500){
			maior++;
		}
		
		media+=venda/5;
	}
	
	printf("O numero de vendas maior que R$ 500,00 foi: %d\n",maior);
	printf("A media das vendas foi: R$ %.2f",media);
}
