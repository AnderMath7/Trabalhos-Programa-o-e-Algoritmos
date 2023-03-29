#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main() {
	setlocale(LC_ALL,"portuguese");
	
	float valorProduto, valorFrete, maisDespesas, valorVenda, lucro, totalGastos, porcemtagemLucro;
	
	printf("Insira o valor do produto: R$ ");
	scanf("%f",&valorProduto);
	
	printf("Insira o valor do frete: R$ ");
	scanf("%f",&valorFrete);
	
	printf("Insira o valor das eventuais despesas, caso tenha: R$ ");
	scanf("%f",&maisDespesas);
	
	printf("valor da venda: R$ ");
	scanf("%f",&valorVenda);
	
	totalGastos = valorProduto + valorFrete + maisDespesas;
	lucro = valorVenda - totalGastos;
	porcemtagemLucro = (lucro*100)/valorVenda;
	
	printf("\nA porcentagem de lucro da venda foi de %.2f%%.\n\n",porcemtagemLucro);
	
	system("pause");
}
