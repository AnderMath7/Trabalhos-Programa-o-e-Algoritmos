#include <stdio.h>

/* 4. Escreva um programa que calcule a média dos números digitados pelo usuário, se eles forem pares. O programa deve terminar a leitura se o usuário digitar zero.
 */

int main() {
	int numeros=1, sePar=0, somaSePar=0, hisPar=0;
	float mediaSePar=0;

	do{
		if(numeros>0){
		
		printf("para seguir, digite [0]\n");
		printf("Insira um numero: ");
		scanf("%d",&numeros);
		printf("\n---------------------------------------------\n\n");
		
		if(numeros%2==0){
			sePar++;
			somaSePar=hisPar+numeros;
			hisPar=somaSePar;
		}
		}
	}while(numeros!=0);
	
	if(sePar>0){
		sePar=sePar-1;
		mediaSePar=hisPar/sePar;
		printf("Foram digidados %d numeros pares; A media dos numeros pares digitados e: %.2f",sePar, mediaSePar);
	}else{
		printf("Nao foi digitado nenhum numero par!!");
	}
	
	return 0;
}
