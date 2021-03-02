#include<stdio.h>

main(){
	
	int l, c, valores[10][5];
	
	for(l=0;l<=9;l++){
		
		printf("**** Preenchendo a linha %d: **** \n", l);
		
		for(c=0;c<=4;c++){
			
			printf("Informe um valor para coluna %d: ", c);
			scanf("%d", &valores[l][c]);
			
		}
	}
		for(l=0;l<=9;l++){
			
			for(c=0;c<=4;c++){
				
				printf("\n A posição [%d][%d] vale: %d", l, c, valores[l][c]);
				
			}
		}
		return 0;
}
