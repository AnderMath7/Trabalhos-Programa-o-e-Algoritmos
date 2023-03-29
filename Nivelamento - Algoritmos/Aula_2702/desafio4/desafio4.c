#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int fruta=0;
	
	printf("Qual fruta você escolhe?\nDigite:\n");
	printf("[1] ABACAXI\n");
	printf("[2] MAÇÃ\n");
	printf("[3] PERA\n\n");
	scanf("%d",&fruta);
	
	switch(fruta){
	
		case 1:
			printf("Você escolheu abacaxi!\n\n");
			break;
			
		case 2:
			printf("você escolheu maçã!\n\n");
			break;
		
		case 3:
			printf("Você escolheu Pera!\n\n");
			break;
			
		default:
			printf("opção inválida!!\n\n");
			break;
			
	}
			
	system("pause");
	return 0;
}
