#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	setlocale(LC_ALL,"portuguese");
	
	int numero = 0, dobroNumero = 0;
	
	printf("Insira um n�mero: ");
	scanf("%d",&numero);
	
	dobroNumero = numero*2;
	
	printf("\nO dobro do n�mero escolhido �: %d\n\n",dobroNumero);
	
	system("pause");
}
