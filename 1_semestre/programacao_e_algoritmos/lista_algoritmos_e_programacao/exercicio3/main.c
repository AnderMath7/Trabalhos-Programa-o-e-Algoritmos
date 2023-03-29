#include <stdio.h>

/* 3. A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre o salário e número de filhos.
A prefeitura deseja saber:
a) média do salário da população;
b) média do número de filhos;
c) maior salário;
d) percentual de pessoas com salário até R$ 100,00. O final da leitura de dados se
dará com a entrada de um salário negativo.
 */

int main(){
	float salario=0, somaSalario=0, hisSalario=0, mediaSalario=0, maiorSalario=0, ate100=0, porcentagemAte100=0, mediaFilhos=0, hisFilhos=0;
	int count=1, nFilhos=0, somaFilhos=0;
	
	do{
		printf("\n\n+---------------------------------------+\n");
		printf("|               PESQUISA                |\n");
		printf("+---------------------------------------+\n");
		printf("Insira seu salario: R$  ");
		scanf("%f",&salario);
		
		if(salario>=0){
			somaSalario=hisSalario+salario;
			hisSalario=somaSalario;
			mediaSalario=hisSalario/count;
			
			if(salario>maiorSalario){
				maiorSalario=salario;
			}
			
			if(salario<101){
				ate100++;
			}
			
			porcentagemAte100=(ate100*100)/count;
			
			printf("Quantos filhos voce possui? ");
			scanf("%d",&nFilhos);
		
			somaFilhos=hisFilhos+nFilhos;
			hisFilhos=somaFilhos;
			mediaFilhos=hisFilhos/count;
		
			printf("\nPesquisa efetuada com sucesso! Obrigado!!\n\n");
			count++;
		}
	}while(salario>=0);
	
	printf("\n\nFoi contastado na pesquisa que, a media salarial dos entrevistados e de R$ %.2f, \na media do numero de filhos foi de %.2f, \no maior salario registrado foi R$ %.2f e a porcentagem de pessoas que ganham ate R$ 100,00 foi de %.2f%%\n",mediaSalario,mediaFilhos,maiorSalario,porcentagemAte100);
	printf("%d pessoas foram entrevistadas\n\n",count-1);
	
	return 0;
}
