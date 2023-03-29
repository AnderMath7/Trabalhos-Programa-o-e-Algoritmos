#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/*int main(){
	setlocale(LC_ALL, "portuguese");
	char a[100], b[50], meuNome[50], nomeNamorada[50], futuraProfissao[100];
	
	printf("Digite a 1ª palavra: ");
	scanf("%[^\n]%*c",a);
	
	printf("Digite a 2ª palavra: ");
	scanf("%[^\n]%*c",b);
	
	printf("\nTamanho da string 1 é: %u\n", strlen(a));
	printf("Tamanho da string 2 é: %u\n\n",strlen(b));
	
	printf("Insira o seu nome: ");
	scanf("%[^\n]%*c",meuNome);
	
	printf("Insira o nome da sua namorada(o): ");
	scanf("%[^\n]%*c",nomeNamorada);
	
	printf("Insira o nome da profissão que você quer trabalhar: ");
	scanf("%[^\n]%*c",futuraProfissao);
	
	printf("\nSeu nome tem %u letras\n",strlen(meuNome));
	printf("O nome da sua namorada tem %u letras\n",strlen(nomeNamorada));
	printf("A profissão que você quer seguir ttem %u letras\n\n",strlen(futuraProfissao));
	
	
	system("pause");
	return 0;
}
*/

/*int main(){
	setlocale(LC_ALL, "portuguese");
	char string1[100], string2[50];
	unsigned tamString;
	
	printf("Digite a 1ª palavra: ");
	scanf("%[^\n]%*c",string1);
	
	printf("Digite a 2ª palavra: ");
	scanf("%[^\n]%*c",string2);
	
	tamString = strlen(string1);
	
	printf("\nTamanho da string 1 é: %u\n",tamString);
	printf("Tamanho da string 2 é: %u\n\n",strlen(string2));
	

	
	system("pause");
	return 0;
}
*/

/*int main(){
	setlocale(LC_ALL, "portuguese");
	int idade = 0;
	
	printf("Digite idade: ");
	scanf("%d%*[^\n]",&idade);
	
	printf("\nIdade: %d\n\n",idade);
	
	system("pause");
	return 0;
}
*/

/*int main(){
	setlocale(LC_ALL, "portuguese");
	char nome1[100], nome2[100];
	
	printf("Digite um nome: ");
	scanf("%[^\n]%*c",nome1);
	
	printf("Digite outro nome: ");
	scanf("%[^\n]%*c",nome2);
	
	if(strcmp(nome1, nome2)==0){
		printf("\nOs dois nomes são iguais!\n\n");
	}else{
		if(strcmp(nome1, nome2)<0){
			printf("\nEm ordem alfabética: \n1º %s \n2º %s\n\n",nome1, nome2);
		}else{
			printf("\nEm ordem alfabética: \n1º %s \n2º %s\n\n",nome2, nome1);
		}
	}
	
	system("pause");
	return 0;
}
*/

int main(){
	setlocale(LC_ALL, "portuguese");
	char string1[50], string2[50];
	
	printf("Digite a 1ª palavra: ");
	scanf("%[^\n]%*c",string1);
	
	//string2 = string1;
	strcpy(string2,string1);
	
	printf("\nstring 1 é: %s\n",string1);
	printf("string 2 é: %s\n\n",string2);
	
	system("pause");
	return 0;
}

