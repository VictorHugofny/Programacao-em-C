#include <stdio.h>
#include <math.h>

int main (int argc, char *argv[]){
	
	int v[10];
	
	for (int i = 0; i<10; i++)
	
	v[i] = pow(i,2);
	
	for (int i = 0; i<10; i++)
	printf("Valor de %d Posicao: %d\n", v[i],i);
	
	return 0;
	
}
