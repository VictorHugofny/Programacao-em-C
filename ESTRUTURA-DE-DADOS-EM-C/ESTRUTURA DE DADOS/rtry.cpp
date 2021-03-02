#include <stdio.h>
#include <math.h>

int main (int argc, char *argv[]){
	
	int v[100];
	
	for (int i = 0; i<100; i++)
	
	v[i] = pow(i,2);
	
	for (int i = 0; i<100; i++)
	
	printf("Valor de %d Posicao: %d Endereco: %d\n", *(v+i), i, v+i);
	
	return 0;
	
}
