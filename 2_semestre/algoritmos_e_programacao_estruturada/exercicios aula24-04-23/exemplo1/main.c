#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 
Fun��es de manipula��o de string(#include string.h)

strlen(s1) => Retorna o n�mero de caracteres em s1 at� o '\()'
tolower(ch) => devolve o minusculo de ch
toupper(ch) => devolve o maiusculo de ch
strcpy(s1,s2) => copia s2 em s1
strncpy (s1,s2,qtde) => copia qtde de s2 para s1
strcat(s1,s2) =>concatena s2 no final de s1
strncat(s1,s2,qtde) =>concatena qtde de s2 no final de s1
strcmp(s1,s2) => =0 se s1 = s2; <0 se s1<s2 e >0 se s1 >s2 (compara��o lexicogr�fica)
strncmp(s1,s2,qtde) => an�logo a strcmp, s� que compara qtde caracteres
strrchr(s1,ch) => retorna um ponteiro para a primeira ocorr�ncia de ch em s1
strstr(s1,s2) => retorna um ponteiro para a primeira ocorr�ncia de s2 em s1

 */

void main(void) {
	char nome[3][10];
	int i=0;
	
	for(i=0;i<3;i++){
		printf("Digite o nome do aluno: (%d) \n",i+1);
	//	scanf("%[^\n]s",&nomeAluno);
		gets(nome[i]);
		printf("\n");
	}

	printf("Sequencial nome: \n");
	
	for(i=0;i<3;i++){
		printf("%10d	%s\n",i+1, nome[i]);
	}
	
	getch();
}
