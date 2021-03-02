#include<stdio.h>

main(){

float med,media,mat[3][4];
int x,y;

for (x=0;x<=2;x++){
	printf ("< **** preenchendo a linha (%d) ***** > ",x);
	for (y=0;y<=3;y++){
		printf ("\n digite o valor da coluna %d :",y);
		scanf ("%f",&mat[x][y]);
		med= med + mat[x][y];
}
}
media = med / 12;
printf ("\n a media e igual : %2.f ", media );
return 0; }
