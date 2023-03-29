#include <stdio.h>

int main() {
	int x = 0, count = 0, resultado=0, j=0;
	
	do{
		if(count>0){
			printf("Informação invalida, insira um numero de 1 a 100!\n");
			scanf("%d",&x);
		}else{
			printf("Informe um numero de 1 a 100: ");
			scanf("%d",&x);
		}
		
		count++;
	}while(x<1 || x>100);
	
/*	if(x%3==0){
		printf("hello world");
	}else{
		if(x%4==0){
			
			
		}
	}*/
	
	//printf("valor informado foi: %d",x);
	
	if(x%3==0){
		printf("valor m3");
	}else{
		for(resultado=1;resultado<=x;resultado++){
			if(resultado%4==0){
				
				for(j=1;j<=resultado;j++){
					printf("%d ", j);
				}
				printf("\n");
			}else{
				printf("%d\n",resultado);
			}
			
		
		}
	}
	return 0;
}
