#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	setlocale(LC_ALL,"portuguese");
	
	float largura, comprimento, area;
	printf("CALCULADOR DE �REA:\n\n");
	
	printf("Insira a largura em metros da sala: ");
	scanf("%f",&largura);
	
	printf("Insira o comprimento em metros da sala: ");
	scanf("%f",&comprimento);
	
	area = largura * comprimento;
	
	printf("\nA �rea � de %.2f metros quadrados.\n\n",area);

	system("pause");	
}
