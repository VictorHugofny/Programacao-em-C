#include<stdio.h>

void passagem_por_valor (int par1){
	
	par1++;
	
	printf("Valor de par1 durante a funcao: %d\n", par1);
}

	int main(int argc, char *argv[]){
		
		int par1 = 20;
		
		printf("Valor de par1 antes da funcao: %d\n", par1);
		passagem_por_valor (par1);
		printf("Valor de par1 depois da funcao: %d\n", par1);
		
		return 0;
	}
