#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	setlocale(LC_ALL,"portuguese");
	
	int numero = 0, dobroNumero = 0;
	
	printf("Insira um número: ");
	scanf("%d",&numero);
	
	dobroNumero = numero*2;
	
	printf("\nO dobro do número escolhido é: %d\n\n",dobroNumero);
	
	system("pause");
}
