#include <stdio.h>

int main(int argc, char *argv[]){
	
	short *psi;
	int i = 7;
	float *pf, f;
	
	f = (float) i/2;
	i = (int) f;
	
	pf = &f;
	psi = (short *) pf;
	
	printf("Valor de f: %g\n", f);
	printf("Valor de i: %d\n", i);
	printf("Valor de pf: %d\n", pf);
	printf("Valor de pi: %d\n", psi);
	printf("Proximo valor de pf: %d\n", pf+1);
	printf("Proximo valor de pi: %d\n", psi+1);
	
	return 0;
	}
