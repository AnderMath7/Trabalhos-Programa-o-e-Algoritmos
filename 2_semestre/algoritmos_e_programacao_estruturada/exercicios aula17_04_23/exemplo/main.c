#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int cont, valor[3];
	
	system("color e5");
	for(cont=0;cont<3;cont++){
		printf("\n Digite o %d valor: ",cont+1);
		scanf("%d",&valor[cont+1]);
	}

	printf("\n%d",valor[1]);
}
