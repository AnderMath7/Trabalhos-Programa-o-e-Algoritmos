#include <stdio.h>
#include <stdlib.h>

// Fa�a um programa que escreva de 1 at� 15 em ordem crescente e decrescente. Obs: Apenas uma v�riavel.

main() {
	int count =1;
	
	for(count=1;count<=15;count++){
		printf("%d\n",count);
		sleep(1);
		system("cls");
	}
	
	for(count=15;count>=1;count--){
		printf("%d\n",count);
		sleep(1);
		system("cls");
	}
	
	return 0;
}
