#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int idade = 0;
	
	printf("informe sua idade: ");
	scanf("%d", &idade);
	
	if(idade<0){
		printf("nao nasceu");
	}else{
		if(idade<16){
			printf("nao vota");
		}else{
			if(idade<18){
				printf("opcional");
			}else{
				if(idade==41){
					printf("nao vota e ganha premio");
				}else{
					if(idade<65){
						printf("voto obrigatorio");
					}else{
						if(idade==88){
							printf("nao vota e ganha premio");
						}else{
							printf("opcional");
						}
					}
				}
			}
		}
		}
	
	return 0;
}
