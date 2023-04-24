#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "conio2.h"



int main() {
	char texto[51];
	int i, count=0;
	
	printf("Digite um texto: ");
	gets(texto);
	
	i=strlen(texto);
	printf("%d",i);
	
	for(count=0;count<i;count++){
		gotoxy(count,count+1);
		printf(" %c",texto[count]);
	}

	getch();
	return 0;
}
