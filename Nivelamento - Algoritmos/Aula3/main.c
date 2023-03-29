#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


//desvio condicional simples
/*int main() {
	setlocale(LC_ALL,"portuguese");
	float nota1, nota2, media;
	
	printf("Insira a primeira nota: ");
	scanf("%f",&nota1);
	
	printf("Insira a segunda nota: ");
	scanf("%f",&nota2);
	
	media = (nota1+nota2)/2;
	
	if(media>=7){
		printf("\nAPROVADO!\n\n");
	}
	
	system("pause");
	return 0;
}
*/

//desvio condicional composto
/*int main() {
	setlocale(LC_ALL, "portuguese");
	float nota1, nota2, media;
	
	printf("Insira a primeira nota: ");
	scanf("%f",&nota1);
	
	printf("Insira a segunda nota: ");
	scanf("%f",&nota2);
	
	media = (nota1+nota2)/2;
	
	if(media>=7){
		printf("\nAPROVADO!\n\n");
	}else{
		printf("\nREPROVADO!\n\n");
	}
	
	system("pause");
	return 0;	
}
*/

//desvio condicional aninhado
int main() {
	setlocale(LC_ALL, "portuguese");
	float nota1, nota2, media;
	
	printf("Insira a primeira nota: ");
	scanf("%f",&nota1);
	
	printf("Insira a segunda nota: ");
	scanf("%f",&nota2);
	
	media = (nota1+nota2)/2;
	
	if(media>=7){
		printf("\nAPROVADO!\n\n");
	}else{
		if(media>=5){
			printf("\nRECUPERAÇÂO!\n\n");
		}else{
			printf("\nREPROVADO!\n\n");
			//or more Ifs and elses...
		}
	}
	
	system("pause");
	return 0;	
}



