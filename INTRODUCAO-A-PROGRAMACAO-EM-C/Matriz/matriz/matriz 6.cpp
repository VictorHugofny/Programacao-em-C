#include<stdio.h>

main(){

int x,y;
int M[6][6],N[6][6],PROD[6][6];

for (x=0;x<=2;x++){
	printf ("< **** preenchendo a linha (%d) ***** > ",x);
	for (y=0;y<=2;y++){
		printf ("\n digite o valor da coluna %d :",y);
		scanf ("%d",&M[x][y]);
}
}
	for (x=0;x<=2;x++){
	printf ("< **** preenchendo a linha (%d) ***** > ",x);
	for (y=0;y<=2;y++){
		printf ("\n digite o valor da coluna %d :",y);
		scanf ("%d",&N[x][y]);
}
}
	for (x=0;x<=2;x++){
		for (y=0;y<=2;y++){
		PROD[x][y]= N[x][y] * M[x][y];
		printf ("\n o valor de M = (%d) e N (%d) produto igual = (%d)",M[x][y],N[x][y],PROD[x][y]);
}
printf ("\n");
}
return 0;
}
