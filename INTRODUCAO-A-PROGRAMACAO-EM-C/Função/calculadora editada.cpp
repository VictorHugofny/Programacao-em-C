#include<stdio.h>

int soma (int x, int y){
		printf("Soma = %d", x+y);
}

	int sub (int x, int y){
		printf("Subtração = %d", x-y);
	}
	
	int mult (int x, int y){
		printf("Multiplicação = %d", x*y);
	}
	
	int div (int x, int y){
		printf("Divisão = %d", x/y);
	}
	

int main(){
	int op,a,b;
	while (true){
	
	
	printf("CALCULADORA \n\n");
	printf("(1) - SOMA\n");
	printf("(2) - SUBTRACAO \n");
	printf("(3) - MULTIPLICACAO\n");
	printf("(4) - DIVISAO \n");
	printf("(5) - SAIR \n");
	printf("DIGITE SUA OPCAO: ");
	scanf("%d", &op);

		printf("Digite o valor de A: ");
		scanf("%d", &a);
		
		printf("\n Digite o valor de B: ");
		scanf("%d", &b);}
	
	if (op == 1){
	soma(a,b);
	}			
	else if (op == 2){
	sub(a,b);}
			
	else if (op == 3){
	mult(a,b);}
			
	else if (op == 4){
			div(a,b);}
}
