#include <stdio.h>

int main() {
	
	int n1 = 0, n2 = 0;
	char operador;
	
	printf("--- CALC ---\n");
	
	printf("Informe a n1: ");
	scanf("%d",&n1);
	
	printf("Informe o operador: ");
	scanf(" %c",&operador);
	
	printf("Informe a n2: ");
	scanf("%d",&n2);
	
	switch(operador){
		
		case '+':
			printf("SOMA: %d",n1+n2);
		break;
		
		case '-':
			printf("SUB: %d",n1-n2);
		break;
		
		default:
			printf("Operador invalido");
	}
	
	return 0;
}
