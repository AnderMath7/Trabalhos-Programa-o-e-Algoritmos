#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que receba como dado de entrada 5 numeros inteiros e mostre como resultado os numeros digitados e a media sua media;
obs.: utilazar no maximo 2 variáveis e 1 vetor */

int main() {
	int cont;
	float media, numero[5];
	
	for(cont=0;cont<5;cont++){
		printf("Digite o %d valor: ",cont+1);
		scanf("%f",&numero[cont]);
		system("cls");
	}
	media=(numero[0]+numero[1]+numero[2]+numero[3]+numero[4])/5;
	printf("NUMEROS DIGITADOS: \n");
	printf("%.0f\n",numero[0]);
	printf("%.0f\n",numero[1]);
	printf("%.0f\n",numero[2]);
	printf("%.0f\n",numero[3]);
	printf("%.0f\n\n",numero[4]);
	printf("A media dos numeros foi igual a %.2f",media);
	getch();
	return 0;
}
