#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 
4. Elabore um programa que receba omo dados de entrada duas notas de vários alunos
e ao final mostra:
a) A quantidade de alunos com media maior ou igual a 7,0;
b) A Menor media da Turma;
c) A Media geral da turma;
d) Quantas vezes o programa rodou;
Observação: O programa deve finalizar quando for digitado o valor 0 (zero) e utilizar no
máximo 6 variáveis não utilizar vetores ou matrizes.
*/

int main() {
	setlocale(LC_ALL, "portuguese");
	system("color f1");
	float nota1=1, totMedia=0, media=0, acimaMedia=0, menorMedia=999999, contador=0;
	
	while(nota1!=0){
		printf("Digite a primeira nota ou digite [0] para encerrar:  ");
		scanf("%f",&nota1);
		if(nota1!=0){
			printf("Digite a segunda nota: ");
			scanf("%f",&media);
		
			system("cls");
			
			media=(media+nota1)/2;
			totMedia+=media;
				
			if(media>=7){
				acimaMedia++;
			}
		
			if(menorMedia>media){
				menorMedia=media;
			}
			
			contador++;
		}
	}
	system("cls");
	printf("A quantidade de alunos com a média superior ou igual a 7 é de: %.0f\n",acimaMedia);
	printf("A menor média da turma foi de: %.2f\n",menorMedia);
	printf("A média geral da turma foi: %.2f\n",totMedia/contador);
	printf("O programa rodou %.0f vezes",contador);
	
	getch();
	
	return 0;
}
