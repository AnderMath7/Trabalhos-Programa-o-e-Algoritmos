#include <stdio.h>

int main(){
	char nome [40], genero;
	int idade = 0;
	float altura;
	
	printf("Informe o nome: ");
	scanf("%[^\n]s",&nome);
	
	idade = 0;
	
	do{
	
	printf("Informe a idade: ");
	scanf(" %d",&idade);
	
	if(idade<0){
		printf("idade invalida\n");
	}else{
		if(idade>200){
			
			printf("idade invalida\n");			
		}
	}

	}while(idade<0 || idade>200);
	
	do{
	printf("Informe a altura(em metros): ");
	scanf(" %f",&altura);
	
	if(altura<0.1){
		printf("altura invalida\n");
	}else{
		if(altura>3.1){
			
			printf("altura invalida\n");			
		}
	}
	}while(altura<0.1 || altura>3.1);

printf("-----------------------------------------------------\n");
printf("nome informado foi: %s \n",nome);
printf("idade informada foi: %d",idade);
printf("altura informada foi: %.2f\n",altura);
printf("genero informado foi: \n");

	return 0;
}
