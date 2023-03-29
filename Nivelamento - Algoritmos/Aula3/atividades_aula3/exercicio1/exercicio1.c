#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	float nota1, nota2, nota3, nota4, nota5, media;
	
	printf("Insira a primeira nota: ");
	scanf("%f",&nota1);
	
	printf("Insira a segunda nota: ");
	scanf("%f",&nota2);
	
	printf("Insira a terceira nota: ");
	scanf("%f",&nota3);
	
	printf("Insira a quarta nota: ");
	scanf("%f",&nota4);
	
	printf("Insira a quinta nota: ");
	scanf("%f",&nota5);
	
	media = (nota1+nota2+nota3+nota4+nota5)/5;
	
	printf("\nA média do aluno é: %.2f\n\n",media);
	
	system("pause");
	return 0;
}
