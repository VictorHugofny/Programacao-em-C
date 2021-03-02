#include<stdio.h>

void passagem_por_referencia (int *par1){
	
	*par1+=1;
	
	printf("Valor de par1 durante a funcao: %d\n", *par1);
	}

	int main(int argc, char *argv[]){
		
		int  x = 20;
		
		printf("Valor de x antes da funcao: %d\n", x);
		passagem_por_referencia (&x);
		printf("Valor de x depois da funcao: %d\n", x);
		
		return 0;
	}
