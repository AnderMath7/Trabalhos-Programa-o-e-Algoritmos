#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Faça um programa que seja um simulador de relógio digital */

main() {
	int hrs=0, seg=0, min=0, day=0, m=1, y=0;
	
	for(hrs=0;hrs<24;hrs++){
	
		for(min=0;min<=60;min++){
	
			for(seg=0;seg<=60;seg++){
				printf("%d : %d : %d\n",hrs,min,seg);
				sleep(1);
				system("cls");
			}
		}
	}
	return 0;
}
