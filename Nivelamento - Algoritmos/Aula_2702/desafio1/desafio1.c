#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	char produto[50];
	float preco, precoAtualizado;
	
	printf("Insira o nome do produto: ");
	scanf("%[^\n]s",&produto);
	
	printf("Qual é o preço do produto? ");
	scanf("%f",&preco);
	
	precoAtualizado=(preco*15)/100;
	precoAtualizado+=preco;
	
	printf("\nO valor atualizado do produto \"%s\" é de R$ %.2f\n\n",produto ,precoAtualizado); 
	
	system("pause");
	return 0;
}
