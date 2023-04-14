float resultado(float totalSalario, float maiorSalario, float totalFilhos, float ateCem, float contagem){
	float mediaFilhos, porcentagemAteCem;
	
	mediaFilhos=totalFilhos/contagem;
	porcentagemAteCem=(ateCem*100)/contagem;
	
	design(1);
	gotoxy(35,1);
	textcolor(4);
	printf("RESULTADO\n\n");
	
	textcolor(3);
	gotoxy(1,3);
	printf("Foi constatado na pesquisa com %.0f participantes que a média salarial foi de:",contagem);
	gotoxy(1,4);
	printf("%.2f",totalSalario/contagem);
	gotoxy(1,5);
	printf("A média de filhos por participante foi de: %.2f\n",mediaFilhos);
	gotoxy(1,6);
	printf("O maior salário foi de: R$ %.2f\n",maiorSalario);
	gotoxy(1,7);
	printf("O percentual de pessoas com o salário de até R$ 100,00 foi de: %.2f%%\n",porcentagemAteCem);
	
	return totalSalario;
}
