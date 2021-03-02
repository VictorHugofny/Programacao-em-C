#include<stdio.h>

int main (){
	
int i,x,mat[5][5]; 

for (x=0;x<4;x++){
	for (i=0;i<4;i++){
		printf ("digite um valor para posição (%d) : ",i+1);
		scanf ("%d",&mat[x][i]);
	}
}
for (x=0;x<4;x++){
	for (i=0;i<4;i++){
		printf ("%d \t ",mat[x][i]);
	}
	printf("\n");
}

}
