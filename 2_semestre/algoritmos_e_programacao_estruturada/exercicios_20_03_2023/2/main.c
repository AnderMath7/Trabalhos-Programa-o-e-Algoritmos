/*
Fa�a um programa que receba como dado de entrada o sal�rio de uma pessoa e o seu tempo de servi�o
e mostre como resultado o sal�rio final, onde:
	Tempo>5anos, b�nus de 10%;
	Caso o sal�riofinal seja maior que R$ 1800,00
	descontasr INSS de 11%;
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "portuguese");	
	
	float salario=0;
	int tempo=0;

	printf("Digite o tempo de trabalho em meses: ");
	scanf("%d",&tempo);

	printf("Digite o sal�rio: R$ ");
	scanf("%f",&salario);
	
	

	if(tempo>=60){
		salario=salario+(salario*0.10);
	}
	
	
	if(salario>=1800){
		salario=salario-(salario*0.11);
	}

	printf("\nO sal�rio final � %.2f\n\n",salario);


	system("pause");	
}
