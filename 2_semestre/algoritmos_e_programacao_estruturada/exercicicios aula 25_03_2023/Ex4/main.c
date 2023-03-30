#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que imprima o alfabeto em Maiusculo e Minusculo */


main(){
	int count;
	
	system("color e4");
	for(count=0;count<225;count++){
		if(count>=65 && count<=90){
			printf("%c\n",count);
			sleep(1);
			system("cls");
		}
		
		if(count>=97 && count<=122){
			printf("%c\n",count);
			sleep(1);
			system("cls");
		}
	}
}
