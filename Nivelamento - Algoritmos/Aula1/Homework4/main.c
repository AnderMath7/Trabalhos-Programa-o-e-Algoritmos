#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	setlocale(LC_ALL,"portuguese");
	
	float cotacaoDolar, valorReal, valorDolar;
	cotacaoDolar = 5.16;
	//13/02/2023
	
	printf("CONVERSOR DÓLAR:\n\n");
	
	printf("Insira o valor em reais: R$ ");
	scanf("%f",&valorReal);
	
	valorDolar = valorReal * cotacaoDolar;
	
	printf("%.2f reais é igual a %.2f dolares\n\n",valorReal,valorDolar);
	
	
	system("pause");
}
