#include<stdio.h>
int main(){

int X,vet[20];

for (X=40;X>=0;X--){
	if (X%2 == 0 ){ // SE O RESTO DA DIVISÃO FOR 0 - % = RESTO
		vet[X] = X;
		printf ("\n %d",vet[X]);
	}
}
	return 0;
}
	

