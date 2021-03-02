#include<stdio.h>
int main(){

int X,valores,vet[10],maior = 0;

for (X=0;X<=9;X++){
printf ("digite qualquer valor: ");
scanf ("%d",&vet[X]);
 if (vet[X] >= 0 && vet[X] > maior){ // 1 =  VALORES POSITIVOS MAIOR QUE 0 2 = SE O VALOR FOR MAIOR QUE MAIOR = 0 CERTO.
 maior = vet[X];
}
}
printf (" o maior valor E %d ",maior);
	return 0;
}
	

