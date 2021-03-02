#include<stdio.h>

main(){

int x,y,i=0,S[5][5],a,V[25];

printf ("digite um valor para (A)");
scanf ("%d" ,&a);

for (x=0;x<=4;x++){
	printf ("< **** preenchendo a linha (%d) ***** > ",x);
	for (y=0;y<=4;y++){
		printf ("\n digite o valor da coluna %d :",y);
		scanf ("%d",&S[x][y]);
}
}
	for (x=0;x<=4;x++){
		for (y=0;y<=4;y++){
		i++;
		V[i]= S[x][y] * a;
		printf ("\n o valor de S(%d)* A(%d) = %d",x,y,V[i]);
}
printf ("\n");
}

return 0;
}
