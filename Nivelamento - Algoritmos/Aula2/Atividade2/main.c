#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	setlocale(LC_ALL,"portuguese");
	#define PI 3.1415
	float raio, area;
	
	printf("CALCULAR �REA DE UM C�RCULO\n\n");
	
	printf("Insira o raio: ");
	scanf("%f",&raio);
	
	area = raio * raio * PI;
	
	printf("A area da esfera �: %.2f\n\n",area);
	
	system("pause");
}
