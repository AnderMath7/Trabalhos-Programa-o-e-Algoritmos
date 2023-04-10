#include <stdio.h>
#include <stdlib.h>
#include "conio2.h"
#include "somar.h"

int main() {
	int v1=0, v2=0;
	
	textcolor(2);
	printf("Digite o valor 1: "); scanf("%d",&v1);
	printf("Digite o valor 2: "); scanf("%d",&v2);
	textcolor(11);
	somar(v1,v2);
	getch();
	
	return 0;
}
