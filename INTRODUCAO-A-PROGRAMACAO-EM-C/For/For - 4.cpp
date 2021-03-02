#include <stdio.h>

main(){
	
	int matr, sexo, idade, nump, x, cont= 0;
	
	printf("Informe a quantidade de pessoas: ");	
	scanf("%d", &nump);
	
	for(x=1; x<=nump; x++){
	
	printf("Informe o numero da matricula: ");
	scanf("%d", &matr);
	
	printf("Informe seu sexo: ");
	scanf("%d", &sexo);
	
	printf("Informe sua idade: ");
	scanf("%d", &idade);
	
if(sexo = 1 && idade>=18){
	
	cont = cont + 1;
}
		
}
	printf("O numero de pessoas aptas ao serviço militar é: %d", cont);	
}

