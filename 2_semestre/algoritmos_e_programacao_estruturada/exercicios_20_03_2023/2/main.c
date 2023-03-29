#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "portuguese");	
	
	float salario=0;
	int tempo=0;

	printf("Digite o tempo de trabalho em meses: ");
	scanf("%d",&tempo);

	printf("Digite o salário: R$ ");
	scanf("%f",&salario);
	
	

	if(tempo>=60){
		salario=salario+(salario*0,10);
	}
	
	
	if(salario>=1800){
		salario=salario-(salario*0,11);
	}

	printf("\nO salário final é %.2f\n\n",salario);


	system("pause");	
}
