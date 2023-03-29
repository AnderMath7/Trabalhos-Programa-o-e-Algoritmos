#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	setlocale(LC_ALL,"portuguese");
	#define PI 3.1415
	float raio, area;
	
	printf("CALCULAR ÁREA DE UM CÍRCULO\n\n");
	
	printf("Insira o raio: ");
	scanf("%f",&raio);
	
	area = raio * raio * PI;
	
	printf("A area da esfera é: %.2f\n\n",area);
	
	system("pause");
}
