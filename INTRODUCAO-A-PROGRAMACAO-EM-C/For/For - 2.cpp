#include <stdio.h>

main(){
	
	int x, idade;
	
	for(x=1; x<=5; x++){
		printf("\n\nInforme sua idade: ");
		scanf("%d", &idade);
		
		if(idade < 18){
			printf("� menor de idade");
		}
		
		else {
			printf("� maior de idade");
		}
	}
	printf("\n\nFIM DO PROGRAMA!!!");
}
