#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que receba como dado de entrada 5 numeros inteiros e mostre\;
a| a lista com os números digitados;
a) a lista dos números pares digitados;
c\) a lista dos numeros impares digitados;
OBS. UTILIZAR OBRIGATÓRIAMENTE 3 LISTAS. */

int main() {
	int valor[5], pares[5], impares[5], cont;
	
	for(cont=0;cont<5;cont++){
		printf("Digite o %d valor: ",cont+1);
		scanf("%d",&valor[cont]);
		
		if(valor[cont]%2==0){
			pares[cont]=valor[cont];
			impares[cont]=2;
		}else{
			impares[cont]=valor[cont];
			pares[cont]=1;
		}
		system("cls");
	}
	
	printf("NUMEROS DIGITADOS:\n");
	printf("%d, %d, %d, %d, %d;\n\n",valor[0], valor[1], valor[2], valor[3], valor[4], valor[5]);
	
	printf("NUMEROS PARES DIGITADOS:\n");
	if(pares[0]!=1){
		printf("%d",pares[0]);
	}
	if(pares[1]!=1){
		printf(" ,%d",pares[1]);
	}
	if(pares[2]!=1){
		printf(" ,%d",pares[2]);
	}
	if(pares[3]!=1){
		printf(" ,%d",pares[3]);
	}
	if(pares[4]!=1){
		printf(" ,%d",pares[4]);
	}
	printf(";");
	
	printf("\n\nNUMEROS IMPARES DIGITADOS:\n");
	if(impares[0]!=2){
	printf("%d",impares[0]);
	}
	if(impares[1]!=2){
		printf(" ,%d",impares[1]);
	}
	if(impares[2]!=2){
		printf(" ,%d",impares[2]);
	}
	if(impares[3]!=2){
		printf(" ,%d",impares[3]);
	}
	if(impares[4]!=2){
		printf(" ,%d",impares[4]);
	}
	printf(";");
	
	getch();
	return 0;
}
