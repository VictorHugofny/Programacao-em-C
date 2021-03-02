#include <stdio.h>

main(){
	
	int x, idade;
	
	for(x=1; x<=5; x++){
		printf("\n\nInforme sua idade: ");
		scanf("%d", &idade);
		
		if(idade < 18){
			printf("É menor de idade");
		}
		
		else {
			printf("É maior de idade");
		}
	}
	printf("\n\nFIM DO PROGRAMA!!!");
}
