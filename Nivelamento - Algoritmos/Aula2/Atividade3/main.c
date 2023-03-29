#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	setlocale(LC_ALL,"portuguese");
	
	float consumoTinta = 0.3, lataTinta = 2, areaParede, comprimentoParede, larguraParede, quantidadeLatas;
	
	printf("Insira o comprimento da parede em metros: ");
	scanf("%f",&comprimentoParede);
	
	printf("Insira a largura da parede em metros: ");
	scanf("%f",&larguraParede);
	
	areaParede = comprimentoParede * larguraParede;
	
	quantidadeLatas = (areaParede/consumoTinta)/lataTinta;	
	
	printf("\nContando que para pintar um metro quadrado você precise de 300 ml de tinda e cada lata tem 2000 ml,\nvocê precisará de %.2f latas de tinta\n\n",quantidadeLatas);
	
	
	system("pause");
}
