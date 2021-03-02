#include <stdio.h>

int main(int argc, char *argv[]){
	
	int x=4;
	int *pi;
	
	pi = &x;
	
	printf("Endereço de x:               %x\n", &x);
	printf("Valor de x:                  %x\n", x);
	printf("Valor DO ponteiro para x:    %x\n", pi);
	printf("Endereco do ponteiro para x: %x\n", &pi);
	printf("Valor NO ponteiro para x:    %x\n", *pi);
	
	return 0;
}
