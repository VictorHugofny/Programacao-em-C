#include <stdio.h>

main(){
	
	int x, matr, sexo, h=0, m=0;
	
	for(x=1; x<=6; x++){
		printf("\n\nInforme o n�mero da matr�cula: ");
		scanf("%d", &matr);
		printf("\n\nInforme seu sexo: ");
		scanf("%d", &sexo);
		
		if(sexo == 1){
			printf("\n\nNumero da matricula: %d, Sexo: Masculino", matr);
			h= h+1;
		}
		else if(sexo == 2){
		printf("\n\nNumero da matricula: %d, Sexo: Feminino", matr);
		m= m+1;	
		}
	}
	printf("\n\nA quantidade de homens � igual a: %d", h);
	printf("\n\nA quantidade de mulheres � igual a: %d", m);
}
