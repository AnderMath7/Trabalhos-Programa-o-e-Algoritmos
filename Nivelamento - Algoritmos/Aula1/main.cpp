//aula vari�veis
#include <stdio.h>

#include <locale.h>
//biblioteca para formatar os caracteres

main(){
	setlocale(LC_ALL,"portuguese");
	//fun��o acentos
	
	int numero = 10;
	char letra;
	char nomePessoa[50];
	float numero2;
	double numero3;

	// %d ou %i
	// %c
	// %s
	// %f
	// %fl

	printf("O valor da vari�vel inteira �: %d\n",numero);
	
/*	printf("Digite o seu nome completo: ");
	scanf("%[^\n]s",&nomePessoa);
	//ou fgets(nomePessoa, 50, stdin);
	printf("O valor da array de caracteres agora �: %s\n\n",nomePessoa);
	*/
	printf("Digite um n�mero: ");
	scanf("%f",&numero2);
	
	printf("\nDigite outro n�mero: ");
	scanf("%f",&numero3);
	printf("%f",numero3);
	
	float soma = numero2 + numero3;
	printf("A soma dos dois n�meros inseridos �: %.2f",soma);
	
}
