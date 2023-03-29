#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	float base, altura, area;
	
	printf("CALCULAR ÁREA DO TRIÂNGULO\n\n");
	printf("insira a base do triângulo: ");
	scanf("%f",&base);
	
	printf("Insira a altura do triângulo: ");
	scanf("%f",&altura);
	
	area = (base*altura)/2;
	
	printf("\nA área do triângulo é de: %.1f\n\n",area);
	
	system("pause");
	return 0;
}
