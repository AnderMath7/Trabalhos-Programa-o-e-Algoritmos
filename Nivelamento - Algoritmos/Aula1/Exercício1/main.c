#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL,"portuguese");
	
	char nome[50], endereco[50], cep[10], cpf[15], email[50], sexo;
	int idade = 0;
	float altura;
	
	printf("CADASTRO:\n\n");
	printf("Nome: ");
	scanf("%[^\n]s",&nome);
	
	printf("Email: ");
	scanf("%s",email);
	
	printf("Idade: ");
	scanf("%d",&idade);
	
	printf("Gênero(M,F,N): ");
	scanf(" %c",&sexo);
	
	printf("Altura: ");
	scanf("%f",&altura);
	
	printf("CPF: ");
	scanf("%s",&cpf);
	
	printf("Endereço: ");
	scanf("%[^\n]s",&endereco);
	
	printf("CEP: ");
	scanf("%s",&cep);
	
	
	
	
	
	
}
