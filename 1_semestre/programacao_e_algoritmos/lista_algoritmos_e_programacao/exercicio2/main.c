#include <stdio.h>

//2. Escreva um programa que leia cinco valores e conte quantos desses valores são negativos, mostrando essa informação no final.


int main() {
	int first=0, second=0, third=0, fourth=0, fifth=0, count=0;
	
	printf("Insira 5 valores!\n");
	printf("Valor 1: ");
	scanf("%d",&first);
	
	printf("Valor 2: ");
	scanf("%d",&second);
	
	printf("Valor 3: ");
	scanf("%d",&third);
	
	printf("Valor 4: ");
	scanf("%d",&fourth);
	
	printf("Valor 5: ");
	scanf("%d",&fifth);
	
	if(first<0){
		count++;
		printf("\nValor 1, %d, e negativo!!\n\n",first);
	}
	
	if(second<0){
		count++;
		printf("Valor 2, %d, e negativo!!\n\n",second);
	}
	
	if(third<0){
		count++;
		printf("Valor 3, %d, e negativo!!\n\n",third);
	}
	
	if(fourth<0){
		count++;
		printf("Valor 4, %d, e negativo!!\n\n",fourth);
	}
	
	if(fifth<0){
		count++;
		printf("Valor 5, %d, e negativo!!\n\n",fifth);
	}
	
	printf("Voce digitou %d valores negativos!!",count);
	
	return 0;
}
