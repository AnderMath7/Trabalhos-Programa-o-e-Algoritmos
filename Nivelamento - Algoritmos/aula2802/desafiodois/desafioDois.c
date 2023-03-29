#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	float nota, media, count=0;
	
	while(count!=3){
		printf("Qual foi a nota do aluno? ");
		scanf("%f",&nota);
		media+=nota;
		count++;		
	}
	
	media/=3;
	
	printf("\nA média do aluno foi: %.2f\n\n",media);
	
	system("pause");
	return 0;
}
