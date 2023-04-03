#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que receba como dado de entrada duas notas de vários alunos e mostre como resultado:
a) Qual foi a maior média obtida;
b) Quantos alunos tiveram média maior ou igual a 7. */

main(){
	float nota1, nota2, media, maiorMedia;
	int continuar=1, maiorSete=0;
	
	while(continuar!=0){
		printf("Digite a primeira nota: ");
		scanf("%f",&nota1);
		printf("Digite a segunda nota: ");
		scanf("%f",&nota2);
		printf("\n\n[1] continuar\n[0] encerrar\n");
		scanf("%d",&continuar);
		
		media=(nota1+nota2)/2;
		if(media>maiorMedia){
			maiorMedia=media;
		}
		if(media>=7){
			maiorSete++;
		}
		system("cls");
	}
	
	printf("A maior media foi: %.2f\n",maiorMedia);
	printf("O numero de alunos com a media maior ou igual a 7 foi: %d",maiorSete);
	getch();
	
	return 0;
}
