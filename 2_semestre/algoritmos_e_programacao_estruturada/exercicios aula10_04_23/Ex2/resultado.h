float resultado(float total){
	float desconto=total*0.10;
	float valor=total-desconto;
	textcolor(11);
	printf("O valor descontado eh: R$ %.2f",valor);
	return valor;
}
