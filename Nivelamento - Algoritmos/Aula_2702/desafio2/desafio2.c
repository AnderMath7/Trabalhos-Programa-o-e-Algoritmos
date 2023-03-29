#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	float valor1=0, valor2=0, valor3=0, media=0;

	printf("Insira o primeiro valor: ");
	scanf("%f",&valor1);
	
	printf("Insira o segundo valor: ");
	scanf("%f",&valor2);
	
	printf("Insira o terceiro valor: ");
	scanf("%f",&valor3);
	
	media=(valor1+valor2+valor3)/3;
	
	printf("\nA média dos três valores inseridos é %.2f\n\n",media);
	
	system("pause");
	return 0;
}
