#include<stdio.h>

int menu(){
	int op;
	
	printf("CALCULADORA \n\n");
	printf("(1) - SOMA\n");
	printf("(2) - SUBTRACAO \n");
	printf("(3) - MULTIPLICACAO\n");
	printf("(4) - DIVISAO \n");
	printf("(5) - SAIR \n");
	printf("DIGITE SUA OPCAO: ");
	scanf("%d", &op);
	return op;
	
}

	void soma (int x, int y){
		printf("Soma = %d", x+y);
}

	void sub (int x, int y){
		printf("Subtra��o = %d", x-y);
	}
	
	void mult (int x, int y){
		printf("Multiplica��o = %d", x*y);
	}
	
	void div (int x, int y){
		printf("Divis�o = %d", x/y);
	}
	
	main(){
		
		int a, b, op;
		
		printf("Digite o valor de A: ");
		scanf("%d", &a);
		
		printf("\n Digite o valor de B: ");
		scanf("%d", &b);
		
		op = menu();
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
