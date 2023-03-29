#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int numeroDigitado=0, count=0;

	printf("Quantos números ímpares você quer que seja impresso? ");
	scanf("%d",&numeroDigitado);
	
	numeroDigitado*=2;
	
	count=0;
	while(count!=numeroDigitado){
		if(count%2!=0){
			printf("%d\n",count);
		}
		count++;
	}
	
	system("pause");
	return 0;
}
