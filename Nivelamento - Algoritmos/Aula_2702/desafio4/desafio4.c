#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int fruta=0;
	
	printf("Qual fruta voc� escolhe?\nDigite:\n");
	printf("[1] ABACAXI\n");
	printf("[2] MA��\n");
	printf("[3] PERA\n\n");
	scanf("%d",&fruta);
	
	switch(fruta){
	
		case 1:
			printf("Voc� escolheu abacaxi!\n\n");
			break;
			
		case 2:
			printf("voc� escolheu ma��!\n\n");
			break;
		
		case 3:
			printf("Voc� escolheu Pera!\n\n");
			break;
			
		default:
			printf("op��o inv�lida!!\n\n");
			break;
			
	}
			
	system("pause");
	return 0;
}
