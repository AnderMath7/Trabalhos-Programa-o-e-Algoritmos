#include <stdio.h>
#include <stdlib.h>
#include "conio2.h"

main() {
	int linha, coluna, letreiro;
	

	for(linha=1; linha<78; linha++){
		textcolor(12);
		gotoxy(linha,1);
		printf("%c",3);
		sleep(1);
		
		textcolor(12);
		gotoxy(linha,24);
		printf("%c",3);
		sleep(1);	
	}
	
		for(coluna=1; coluna<24; coluna++){
		textcolor(12);
		gotoxy(1,coluna);
		printf("%c",3);
		sleep(1);
		
		textcolor(12);
		gotoxy(78,coluna);
		printf("%c",3);
		sleep(1);	
	}
		gotoxy(36,12); textcolor(13);
		printf("Bom Dia!!");
	getch();
	
	return 0;
}
