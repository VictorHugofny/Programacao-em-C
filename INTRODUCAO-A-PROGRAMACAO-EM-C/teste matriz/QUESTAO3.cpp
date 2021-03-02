#include<stdio.h>

main (){

int y,x,prod=1,mat[3][3];

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
		if (y == x){
		prod = mat[y][x] * prod ;
		
}
}}
printf ("\n o produto da diagonal principal e =  %d",prod);
}



