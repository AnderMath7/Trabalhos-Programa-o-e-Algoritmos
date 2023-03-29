#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "portuguese");
	int count, numero;
	
	
	for(count=0;count<6;count++){
		if(count=1){
			printf("Digite um número: ");
			scanf("%d",&numero);
		}else{
			printf("Digite outro número: ");
			scanf("%d",&numero);
		}
		printf("%d",count);
		
	}
}
