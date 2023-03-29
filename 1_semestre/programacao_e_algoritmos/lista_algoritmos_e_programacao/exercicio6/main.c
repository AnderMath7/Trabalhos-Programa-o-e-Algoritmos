#include <stdio.h>

/* 6. Escreva um programa que receba dez números inteiros do teclado e diga quantos são pares e quantos são ímpares.
 */

int main() {
	int par=0,impar=0, numero=0, count=0;
	
	for(count=0;count<10;count++){
		printf("Digite um numero: ");
		scanf("%d",&numero);
		
		if(numero%2==0){
			par++;
		}else{
			impar++;
		}
	}
	
	printf("voce digitou %d numeros pares e %d numeros impares!!",par, impar);
	
	return 0;
}
