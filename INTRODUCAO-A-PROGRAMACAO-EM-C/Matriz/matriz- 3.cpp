#include<stdio.h>

main(){

int x,y,menor=1000, mat[3][3];

for (x=0;x<=2;x++){
	printf ("< **** preenchendo a linha (%d) ***** > ",x);
	for (y=0;y<=2;y++){
		printf ("\n digite o valor da coluna %d :",y);
		scanf ("%d",&mat[x][y]);
}
}
for (x=0;x<=2;x++){
 for (y=0;y<=2;y++){
 	if (mat[x][y] < menor ){
		menor = mat[x][y] ;
		}
}
}
printf ("\n o menor valor da matriz e : %d ", menor );
return 0; }
