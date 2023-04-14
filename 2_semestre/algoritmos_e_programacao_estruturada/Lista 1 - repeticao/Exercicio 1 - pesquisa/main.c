#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "resultado.h"
#include "design.h"
#include "conio2.h"

/* 1. A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados
sobre o sal�rio e o n�mero de filhos. A prefeitura deseja saber:
a) m�dia salarial da popula��o;
b) m�dia do n�mero de filhos;
c) maior sal�rio;
d) percentual de pessoas com sal�rio at� R$ 100,00.
O final da leitura de dados se dar� com a entrada de um sal�rio negativo. */

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
		printf("(Para encerrar digite um sal�rio negativo)\n");
		
		gotoxy(1,3);
		printf("Quanto voc� ganha por m�s? R$ ");	
		scanf("%f",&salario);
		system("cls");
		if(salario>=0){
			design(0);
			gotoxy(1,1);
			printf("Quantos filhos voc� tem? ");
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
