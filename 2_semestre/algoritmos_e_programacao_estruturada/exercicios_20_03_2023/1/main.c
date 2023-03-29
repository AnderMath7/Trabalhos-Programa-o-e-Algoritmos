/*Faça um programa na linguagem C que receba como dado de entrada o valor de uma venda e a quantidade de parcelas
 e mostre como resultado o valor da venda com desconto obedecendo a seguinte tabela:
+-----------------------------+
|  parcelas |                 |
+-----------+-----------------+
|  0 ou 1   | Desconto de 5%  |
+-----------+-----------------+
|  2 até 3  |   Juros de 5%   |
+-----------+-----------------+
| 4 ou mais |   Juros de 10%  |
+-----------------------------+
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "portuguese");
	
	float valorVenda, valorParcela, desconto, juros;
	int quantParcelas;
	
	printf("Qual o valor total da venda: R$  ");
	scanf("%f",&valorVenda);
	
	printf("Qual a quantidade de parcelas desejada: ");
	scanf("%d",&quantParcelas);

	if(quantParcelas<=1){
		desconto=(valorVenda*5)/100;
		valorVenda-=desconto;
		valorParcela=valorVenda/quantParcelas;
	}else{
		if(quantParcelas<=3){
			juros=(valorVenda*5)/100;
			valorVenda+=juros;
			valorParcela=valorVenda/quantParcelas;
		}else{
			juros=(valorVenda*10)/100;
			valorVenda+=juros;
			valorParcela=valorVenda/quantParcelas;
		}
	}
	
	printf("\nVocê pagará %d parcelas de %.2f reais\n\n",quantParcelas,valorParcela);
	
	system("pause");
}

