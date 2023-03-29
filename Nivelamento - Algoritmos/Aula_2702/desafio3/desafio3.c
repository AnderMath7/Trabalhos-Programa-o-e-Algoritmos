#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	float valor1, valor2, valor3, maior, menor;
	
	printf("Insira o primeiro valor: ");
	scanf("%f",&valor1);
	
	printf("Insira o segundo valor: ");
	scanf("%f",&valor2);
	
	printf("Insira o terceiro valor: ");
	scanf("%f",&valor3);
	
	if(valor1>valor2 && valor2>valor3){
		maior=valor1;
		menor=valor3;
		printf("\nO maior número inserido foi: %.0f\nE o menor foi: %.0f\n\n",maior,menor);
	}else{
		if(valor1<valor2 && valor2<valor3){
			maior=valor3;
			menor=valor1;
			printf("\nO maior número inserido foi: %.0f\nE o menor foi: %.0f\n\n",maior,menor);
		}else{
			if(valor1<valor2 && valor2>valor3 && valor3<valor1){
				maior=valor2;
				menor=valor3;
				printf("\nO maior número inserido foi: %.0f\nE o menor foi: %.0f\n\n",maior,menor);
			}else{
				if(valor1<valor2 && valor2>valor3 && valor3>valor1){
					maior=valor2;
					menor=valor1;
					printf("\nO maior número inserido foi: %.0f\nE o menor foi: %.0f\n\n",maior,menor);
				}else{
					if(valor1>valor2 && valor2<valor3 && valor3>valor1){
						maior=valor3;
						menor=valor2;
						printf("\nO maior número inserido foi: %.0f\nE o menor foi: %.0f\n\n",maior,menor);
					}else{
						if(valor1>valor2 && valor2<valor3 && valor3<valor1){
							maior=valor1;
							menor=valor2;
							printf("\nO maior número inserido foi: %.0f\nE o menor foi: %.0f\n\n",maior,menor);
						}else{
							if(valor1==valor2 && valor2>valor3){
								maior=valor3;
								menor=valor2;
								printf("\nO maior número inserido foi: %.0f\nE o menor foi: %.0f\n",maior,menor);
								printf("Valor 1 e valor 2 são iguais!!\n\n");
							}else{
								if(valor1==valor2 && valor2<valor3){
									maior=valor2;
									menor=valor3;
									printf("\nO maior número inserido foi: %.0f\nE o menor foi: %.0f\n",maior,menor);
									printf("Valor 1 e valor 2 são iguais!!\n\n");	
								}else{
									if(valor1>valor2 && valor2==valor3){
										maior=valor1;
										menor=valor2;
										printf("\nO maior número inserido foi: %.0f\nE o menor foi: %.0f\n",maior,menor);
										printf("Valor 2 e valor 3 são iguais!!\n\n");
									}else{
										if(valor1<valor2 && valor2==valor3){
											maior=valor2;
											menor=valor1;
											printf("\nO maior número inserido foi: %.0f\nE o menor foi: %.0f\n",maior,menor);
											printf("Valor 2 e valor 3 são iguais!!\n\n");	
										}else{
											if(valor1==valor3 && valor1>valor2){
												maior=valor1;
												menor=valor2;
												printf("\nO maior número inserido foi: %.0f\nE o menor foi: %.0f\n",maior,menor);
												printf("Valor 1 e valor 3 são iguais!!\n\n");
											}else{
												if(valor1==valor3 && valor1<valor2){
													maior=valor2;
													menor=valor1;
													printf("\nO maior número inserido foi: %.0f\nE o menor foi: %.0f\n",maior,menor);
													printf("Valor 1 e valor 3 são iguais!!\n\n");
												}else{
													if(valor1==valor2 && valor2==valor3){
														printf("\nTodos os valores são iguais!\n\n");
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
		
	system("pause");
	return 0;
}
