#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

long factorial(int n); //prot�tipo
int main(){
	setlocale(LC_ALL, "portuguese");
	int num = 1;

	while(num){
		printf("\nDigite um n�mero: ");
		scanf("%d",&num);
		printf("Fatorial = %1d",factorial(num));
	}
	getch();
	
	system("pause");
	return 0;
}
//defini��o da fun��o
long factorial (int n){
	if(n==0){
		return (1);
	}else{
		return(factorial(n-1)*n);
	}
}
