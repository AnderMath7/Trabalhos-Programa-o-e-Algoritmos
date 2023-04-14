float calculo(float altura1, float crescimento1, float altura2, float crescimento2){
	float maiorAltura=0, menorAltura=0, ano=0;
	int marcador=0;
		
		if(altura1>altura2){
			maiorAltura=altura1;
			menorAltura=altura2;
			marcador=1;
		}else{
			maiorAltura=altura2;
			menorAltura=altura1;
			marcador=2;
		}
	
	while(menorAltura<maiorAltura && ano<=100){
		if(marcador==1){
			maiorAltura+=crescimento1;
			menorAltura+=crescimento2;
			
		}else{
			maiorAltura+=crescimento2;
			menorAltura+=crescimento1;
		}
		ano++;
	}
	design(1);
	gotoxy(35,1);
	printf("RESULTADO");
	
	if(marcador==1 && ano<=100){
		gotoxy(1,3);
		printf("A pessoa 2 demorará %.0f anos para passar a pessoa 1!",ano);
	}else{
		if(marcador==2 && ano<=100){
			gotoxy(1,3);
			printf("A pessoa 1 demorará %.0f anos para passar a pessoa 2!",ano);
		}else{
			if(marcador==1 && ano>100){
				gotoxy(1,3);
				printf("A pessoa 2 não passará a altura da pessoa 1!");
			}else{
				if(marcador==2 && ano>100){
					gotoxy(1,3);
					printf("A pessoa 1 não passará a altura da pessoa 2!");
				}
			}
		}
	}
	
	return altura1;
}
