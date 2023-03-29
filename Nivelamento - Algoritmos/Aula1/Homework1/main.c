#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main (){
	setlocale(LC_ALL,"portuguese");
	
	float numero1 = 0, numero2 = 0, soma = 0, multiplicacao = 0, divisao = 0, subtracao = 0;
	
	printf("Insira o primeiro valor: ");
	scanf("%f",&numero1);
	
	printf("Insira o segundo valor: ");
	scanf("%f",&numero2);
	
	soma = numero1 + numero2;
	subtracao = numero1 - numero2;
	multiplicacao = numero1 * numero2;

	
	printf("\nA soma dos dois números é: %.2f\n",soma);
	printf("A diferença dos dois números é: %.2f\n",subtracao);
	printf("O produto dos dois números é: %.2f\n",multiplicacao);
	
	if(numero2==0){
	
		printf("A divisão entre esses dois números é inválida\n",divisao);
	}else{
		divisao = numero1 / numero2;
		printf("A divisão dos dois números é: %.2f\n",divisao);
	}
	
	
	system("pause");
}
