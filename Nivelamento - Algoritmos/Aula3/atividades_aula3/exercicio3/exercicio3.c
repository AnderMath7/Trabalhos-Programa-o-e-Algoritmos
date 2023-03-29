#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int idade = 0;
	
	printf("Qual a sua idade? ");
	scanf("%d",&idade);
	
	if(idade<30){
		printf("Você é muito jovem!\n\n");
	}
	
	
	system("pause");
	return 0;
}
