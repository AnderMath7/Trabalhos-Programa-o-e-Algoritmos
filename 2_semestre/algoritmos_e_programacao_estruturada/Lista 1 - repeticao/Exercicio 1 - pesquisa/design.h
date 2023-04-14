int design(int title){
	//precisa da conio2.h
	//Criado por Matheus Anderson de Sousa Gomes - UCB - UC22103034
	int coluna=0, linha=3;
	
	textcolor(3);
	if(title==1){
		//borda com título
		for(coluna=0;coluna<80;coluna++){
			if(coluna==0 || coluna==79){
				gotoxy(coluna,0);
				printf("+");
			}else{
				gotoxy(coluna,0);
				printf("-");			
			}
		}
		
		for(coluna=0;coluna<80;coluna++){
			if(coluna==0 || coluna==79){
				gotoxy(coluna,2);
				printf("+");
			}else{
				gotoxy(coluna,2);
				printf("-");			
			}
		}
	
		for(coluna=0;coluna<80;coluna++){
			if(coluna==0 || coluna==79){
				gotoxy(coluna,24);
				printf("+");
			}else{
				gotoxy(coluna,24);
				printf("-");			
			}
		}
	
		gotoxy(0,1);
		printf("|");
		gotoxy(79,1);
		printf("|");
	
		for(linha=3;linha<24;linha++){
			gotoxy(0,linha);
			printf("|");
		}
	
		for(linha=3;linha<24;linha++){
			gotoxy(79,linha);
			printf("|");
		}
	}else{
		if(title==0){
			//borda sem título
			linha=1;
			
			for(coluna=0;coluna<80;coluna++){
			if(coluna==0 || coluna==79){
				gotoxy(coluna,0);
				printf("+");
			}else{
				gotoxy(coluna,0);
				printf("-");			
			}
		}
	
			for(coluna=0;coluna<80;coluna++){
				if(coluna==0 || coluna==79){
					gotoxy(coluna,24);
					printf("+");
				}else{
					gotoxy(coluna,24);
					printf("-");			
				}
			}
	
		
			for(linha=1;linha<24;linha++){
				gotoxy(0,linha);
				printf("|");
			}
		
			for(linha=1;linha<24;linha++){
				gotoxy(79,linha);
				printf("|");
			}		
		}
	}
	
	return 0;
}
