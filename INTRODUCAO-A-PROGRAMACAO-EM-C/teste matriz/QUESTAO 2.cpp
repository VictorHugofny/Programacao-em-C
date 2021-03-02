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

printf ("\n ELEMENTOS DO TRIANGULO INFERIOR DA DIAGONAL SECUNDARIA");
for (y=0;y<=2;y++){
	for (x=0;x<=2;x++){
		if (y>2-x && mat[y][x]!=0){
		printf ("\n %d",mat[y][x]) ;
	}
		
		
}
}
}



