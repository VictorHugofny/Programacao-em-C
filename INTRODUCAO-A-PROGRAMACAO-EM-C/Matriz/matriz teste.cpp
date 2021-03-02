#include<stdio.h>

int imprimir(int mat[4][4]){
	int x,y;
	
for (x=0;x<3;x++){
	for (y=0;y<3;y++){
	printf ("\t (%d)",mat[x][y]);
	}
	printf ("\n ");
}
}
int soma(int mat[4][4]){
	int x,y,soma=0;
	
for (x=0;x<3;x++){
	for (y=0;y<3;y++){
	soma = soma + mat[x][y];
	printf ("\t (%d)",soma);
	}
	printf ("\n ");
}
}
main(){
int i,x, mat[4][4];

for (i=0;i<3;i++){
	printf ("\n - %d -",i+1);
	for (x=0;x<3;x++){
		printf ("\n digite o valor da posicao (%d) ",x+1);
		scanf ("%d",&mat[i][x]);
	}
}
imprimir (mat);
soma (mat);
return 0;
}
