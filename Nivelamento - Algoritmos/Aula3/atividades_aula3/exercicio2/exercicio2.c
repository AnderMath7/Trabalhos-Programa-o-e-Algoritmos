#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	float base, altura, area;
	
	printf("CALCULAR �REA DO TRI�NGULO\n\n");
	printf("insira a base do tri�ngulo: ");
	scanf("%f",&base);
	
	printf("Insira a altura do tri�ngulo: ");
	scanf("%f",&altura);
	
	area = (base*altura)/2;
	
	printf("\nA �rea do tri�ngulo � de: %.1f\n\n",area);
	
	system("pause");
	return 0;
}
