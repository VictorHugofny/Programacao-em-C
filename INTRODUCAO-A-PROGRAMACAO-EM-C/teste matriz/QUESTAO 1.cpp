#include<stdio.h>

int triangulo(int mat[3][3]){
int y,x;
           // ELEMENTOS DO TRIANGULO SUPERIOR DA DIAGONAL PRINCIPAL
for (y=0;y<=2;y++){
	for (x=0;x<=2;x++){
		if (y<x && mat[y][x]!=0){
		printf ("\n %d",mat[y][x]) ;
	}}}}
		

main (){

int y,x,soma=0,mat[3][3];

for (y=0;y<=2;y++){
	for (x=0;x<=2;x++){
		printf ("(%d) digite o valor ",x+1);
		scanf ("%d",&mat[y][x]);
	}
}
for (y=0;y<=2;y++){
	for (x=0;x<=2;x++){
		printf ("%d\t",mat[y][x]);
}
printf ("\n");
}

triangulo(mat);
		
		
}



