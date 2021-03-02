#include<stdio.h>
int main(){

int i,x,valores,vet[10],M[i],maior = 0;

for (i=0;i<=9;i++){
printf ("(%d) Digite um valor : ",i+1);
scanf ("%d",&vet[i]);
}
	printf ("digite mais um valor :");
	scanf ("%d",&x);
	
for (i=0;i<=9;i++){
M[i] = vet[i] * x;
printf ("\n (%d) * (%d) = (%d)",vet[i],x,M[i]);
}
	return 0;
}
	

