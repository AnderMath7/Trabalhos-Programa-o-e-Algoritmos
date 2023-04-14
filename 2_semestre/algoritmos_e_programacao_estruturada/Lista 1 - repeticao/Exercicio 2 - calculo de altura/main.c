#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "conio2.h"
#include "design.h"
#include "calculo.h"

/* Faça um programa em C que recebendo a altura e o
crescimento anual de duas pessoas calcule e imprima quantos anos serão necessários
para que a mais baixa seja maior que a outra. Caso isto não ocorra em 100 anos
informar mensagem de impossibilidade.
 (Não use vetores ou matrizes). */

int main() {
	setlocale(LC_ALL, "portuguese");
	float altura1, altura2, crescimento1, crescimento2;
	
	design(1);
	gotoxy(31,1);
	printf("CALCULO DE ALTURA");
	
	gotoxy(1,3);
	printf("Insira as alturas e os crescimentos por ano que informaremos quanto tempo");
	gotoxy(1,4);
	printf("demorara para uma pessoa passar a outra...");
	
	gotoxy(1,6);
	printf("Pessoa 1:");
	gotoxy(1,7);
	printf("Altura: ");
	scanf("%f",&altura1);
	
	gotoxy(1,9);
	printf("Crescimento em cm por ano: ");
	scanf("%f",&crescimento1);
	
	system("cls");
	
	design(1);
	gotoxy(31,1);
	printf("CALCULO DE ALTURA");
	
	gotoxy(1,3);
	printf("Pessoa 2:");
	gotoxy(1,4);
	printf("Altura: ");
	scanf("%f",&altura2);
	
	gotoxy(1,6);
	printf("Crescimento em cm por ano: ");
	scanf("%f",&crescimento2);
	
	system("cls");
	
	calculo(altura1, crescimento1, altura2, crescimento2);
	
	getch();
	return 0;
}
