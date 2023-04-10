int calc(int n, float n1, float n2){
	float resultado;
	
	switch(n){
		case 1:
			resultado=n1+n2;
			printf("A soma dos dois valores eh: %.2f\n",resultado);
			break;
		
		case 2:
			resultado=n1-n2;
			printf("A subtracao dos valores eh: %.2f\n",resultado);
			break;
			
		case 3:
			resultado=n1*n2;
			printf("O produto dos valores eh: %.2f\n",resultado);
			break;
			
		case 4:
			if(n2==0){
				printf("ERRO! Nao é possivel dividir por 0\n");
			}else{
				resultado=n1/n2;
				printf("A divisao dos valores eh: %.2f\n",resultado);
			}
			break;
		
		default:
			printf("Operacao invalida!\n");
			
		return resultado;
	}
	
	
}
