#include <stdio.h>

/* 5. Escreva um programa que leia três números do teclado e os imprima na tela na ordem inversa da entrada.
 */

int main() {
	int first=0, second=0, third=0;
	
	printf("Insira o primeiro numero: ");
	scanf("%d",&first);
	
	printf("\nInsira o segundo numero: ");
	scanf("%d",&second);
	
	printf("\nInsira o terceiro numero: ");
	scanf("%d",&third);
	printf("\n-------------------------------------\n\n");
	printf("RESULTADO: \n\n%d\n%d\n%d",third, second, first);
	
	return 0;
}
