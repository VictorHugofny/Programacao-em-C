#include<stdio.h>

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


for (y=0;y<=2;y++){
	for (x=0;x<=2;x++){
		if (y == 2-x){
		soma = mat[y][x] + soma ;
		
}
}}
printf ("\n a soma dos elementos da diagonal secundaria =  %d",soma);
}



