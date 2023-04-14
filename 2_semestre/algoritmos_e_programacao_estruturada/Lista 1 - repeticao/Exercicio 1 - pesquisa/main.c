#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "resultado.h"
#include "design.h"
#include "conio2.h"

/* 1. A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados
sobre o salário e o número de filhos. A prefeitura deseja saber:
a) média salarial da população;
b) média do número de filhos;
c) maior salário;
d) percentual de pessoas com salário até R$ 100,00.
O final da leitura de dados se dará com a entrada de um salário negativo. */

int main() {
	setlocale(LC_ALL, "portuguese");
	float salario=0, totalSalarios, maiorSalario, quantFilhos=0,totalFilhos=0, contador=0, salarioAteCem=0;
	
	while(salario>=0){
		design(1);
		
		gotoxy(35,1);
		textcolor(4);
		printf("PESQUISA\n\n");	
		
		textcolor(3);
		gotoxy(1,5);
		printf("(Para encerrar digite um salário negativo)\n");
		
		gotoxy(1,3);
		printf("Quanto você ganha por mês? R$ ");	
		scanf("%f",&salario);
		system("cls");
		if(salario>=0){
			design(0);
			gotoxy(1,1);
			printf("Quantos filhos você tem? ");
			scanf("%f",&quantFilhos);
			system("cls");
			
			totalSalarios+=salario;
			totalFilhos+=quantFilhos;
			
			if(maiorSalario<salario){
				maiorSalario=salario;
			}
			if(salario<=100){
				salarioAteCem++;
			}
			contador++;
		}
	}
	resultado(totalSalarios, maiorSalario, totalFilhos, salarioAteCem, contador);
	getch();
	
	return 0;
}
