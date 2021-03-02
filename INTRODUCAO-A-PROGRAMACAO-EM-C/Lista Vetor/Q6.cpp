#include<stdio.h>
int main(){

int i,A[20],quant=0,valor;


for (i=0;i<20;i++){
printf ("(%d) Digite um valor : ",i+1);
scanf ("%d",&A[i]);
}
printf ("digite um numero qualquer");
scanf ("%d",&valor);

for (i=0;i<20;i++){
	if(A[i]==valor ){
		quant = quant + 1;
	}
}
printf ("achou (%d) numeros iguais no vetor",quant);
	
return 0;
}
