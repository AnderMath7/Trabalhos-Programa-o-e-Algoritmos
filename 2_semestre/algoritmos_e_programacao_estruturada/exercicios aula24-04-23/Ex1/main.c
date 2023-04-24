#include <stdio.h>
#include <stdlib.h>
#include "conio2.h"
#include "design.h"

/* Faça um programa que receba como dado de entrada o valor do salário descontando o INSS de 11% de 5 funcionários e mostre como resultado:
a) A lista com os salários e os descontos;
b) Qual foi o maior salário;
c) A média dos descontos; */

int main() {
	int count;
	float maior=0, media, salario[5], desconto[5];
	
	system("color 70");
	for(count=0;count<5;count++){
		printf("Insira o salario do funcionario %d: R$ ",count+1);
		scanf("%f",&salario[count]);
		
		desconto[count]=salario[count]*0.11;
		
		if(maior<salario[count]){
			maior=salario[count];
		}
		system("cls");
	}	
	
	media=(desconto[0]+desconto[1]+desconto[2]+desconto[3]+desconto[4])/5;
	
	design(0);
	gotoxy(1,1);
	textcolor(4);
	printf("FUNCIONARIO 1: ");
	textcolor(0);
	gotoxy(1,3);
	printf("salario: R$ %.2f",salario[0]);
	gotoxy(1,4);
	printf("Desconto INSS: R$ %.2f",desconto[0]);
	gotoxy(1,5);
	printf("TOTAL: R$ %.2f",salario[0]-desconto[0]);
	
	textcolor(4);
	gotoxy(1,7);
	printf("FUNCIONARIO 2: ");
	textcolor(0);
	gotoxy(1,9);
	printf("salario: R$ %.2f",salario[1]);
	gotoxy(1,10);
	printf("Desconto INSS: R$ %.2f",desconto[1]);
	gotoxy(1,11);
	printf("TOTAL: R$ %.2f",salario[1]-desconto[1]);

	gotoxy(26,1);
	textcolor(4);
	printf("FUNCIONARIO 3: ");
	textcolor(0);
	gotoxy(26,3);
	printf("salario: R$ %.2f",salario[2]);
	gotoxy(26,4);
	printf("Desconto INSS: R$ %.2f",desconto[2]);
	gotoxy(26,5);
	printf("TOTAL: R$ %.2f",salario[2]-desconto[2]);
	
	gotoxy(26,7);
	textcolor(4);
	printf("FUNCIONARIO 4: ");
	textcolor(0);
	gotoxy(26,9);
	printf("salario: R$ %.2f",salario[3]);
	gotoxy(26,10);
	printf("Desconto INSS: R$ %.2f",desconto[3]);
	gotoxy(26,11);
	printf("TOTAL: R$ %.2f",salario[3]-desconto[3]);
	
	gotoxy(51,1);
	textcolor(4);
	printf("FUNCIONARIO 5: ");
	textcolor(0);
	gotoxy(51,3);
	printf("salario: R$ %.2f",salario[4]);
	gotoxy(51,4);
	printf("Desconto INSS: R$ %.2f",desconto[4]);
	gotoxy(51,5);
	printf("TOTAL: R$ %.2f",salario[4]-desconto[4]);
	
	gotoxy(1,13);
	textcolor(4);
	printf("A media dos descontos foi: R$ %.2f",media);
	gotoxy(1,14);
	printf("O maior salario foi: R$ %.2f",maior);
	getch();
	
	return 0;
}
