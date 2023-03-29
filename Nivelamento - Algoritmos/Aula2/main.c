#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	setlocale(LC_ALL,"portuguese");
	
	int i = 0;
	
	for(i=0;i>=0;i=i+1000000){
	
		printf("%d\n",i);
		
	}
	
	system("pause");
}
