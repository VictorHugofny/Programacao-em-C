#include<stdio.h>
int main(){

int i,N,A[100],B[100],SOMA[100];

printf ("digite o tamanho do vetor :");
scanf ("%d",&N);

for (i=0;i<N;i++){
printf ("(%d) Digite um valor : ",i+1);
scanf ("%d",&A[i]);
}

for (i=0;i<N;i++){
printf ("(%d) Digite um valor : ",i+1);
scanf ("%d",&B[i]);
}
printf ("\n\n VETOR A");
for (i=0;i<N;i++){
printf ("(%d) : ",A[i]);
}
printf ("\n VETOR A");
for (i=0;i<N;i++){
printf ("(%d) : ",B[i]);
}
for (i=0;i<N;i++){
SOMA[i] = A[i] + B[i];
printf ("\n #(%d)# A(%d) + B(%d) = (%d)",i+1,A[i],B[i],SOMA[i]);
}
}
	

