#include<stdio.h>
#include <stdlib.h>
int menu(){
int op;
printf ("\n---------------------------");
printf ("\n---------------------------");
printf("\n MENU (MATRIZ)(VETOR)");
printf ("\n(1) IMPRIMIR MATRIZ");
printf ("\n(2) SOMAR MATRIZ");
printf ("\n(3) MEDIA DA MATRIZ");
printf ("\n(4) MAIOR VALOR DA MATRIZ");
printf ("\n(5) MENOR VALOR DA MATRIZ");
printf ("\n(6) VALORES DA SUPERIOR DA DIGIONAL PRINCIPA");
printf ("\n(7) VETOR ORDENADO");
printf ("\n ---------------------------");
printf ("\n---------------------------");
printf ("\n DIGITE UMA OPÇAO: ");
printf ("\n ");
scanf ("%d",&op);
system("cls");
return op;
}

int imprimir(int mat[4][4]){
	int x,y;
		for (x=0;x<3;x++){
		for (y=0;y<3;y++){
		printf ("\t (%d)",mat[x][y]);
		}
		printf ("\n ");
	}
printf ("\n imprimindo matriz");
	}
	int soma(int mat[4][4]){
		int x,y,soma=0;
		printf ("\n -SOMA MATRIZ-");
		printf ("\n");
		for (x=0;x<3;x++){
		for (y=0;y<3;y++){
		soma = soma + mat[x][y];
		}
		printf ("\t (%d)",soma);
		printf ("\n ");
	}
	}
	int media(int mat[4][4]){
		int x,y,media,soma=0;
		
		printf ("\n");
		for (x=0;x<3;x++){
		for (y=0;y<3;y++){
		soma = soma + mat[x][y];
		}
	}
			media = soma /12;
			printf ("\n a  media e igual a (%d)",media);
}
int maior(int mat[4][4]){
	int x,y,maior=0;
	
	printf ("\n");
	for (x=0;x<3;x++){
	for (y=0;y<3;y++){
	if (mat[x][y]> maior){
		maior = mat[x][y];
	}
	}
}
printf ("\n o maior valor e (%d)",maior);
}
	
int menor(int mat[4][4]){
	int x,y,menor;
	
	menor = mat[0][0];
	printf ("\n");
	for (x=0;x<3;x++){
	for (y=0;y<3;y++){
	if (mat[x][y]< menor){
		menor = mat[x][y];
	}
	}
}
printf ("\n o menor valor e (%d)",menor);
}
int ordena(int v[4]){
	int x, y, aux;
	
	for (x=0; x<4; x++){
		for (y=x; y<4; y++){
			if (v[x] > v[y]){
				aux = v[x];
				v[x] = v[y];
				v[y] = aux;
			}
		}
	}
	printf ("\n VETOR ORDENADO");
	for (x=0; x<4; x++){
		printf ("\n (%d)",v[x]);
			}
	}
int trsuper(int mat[4][4]){
int x,y;
           // ELEMENTOS DO TRIANGULO SUPERIOR DA DIAGONAL PRINCIPAL
printf ("\n \n SUPERIOR DA DIGIONAL PRINCIPAL - valores");
for (x=0;x<3;x++){
	for (y=0;y<3;y++){
		if (y<x && mat[x][y]!=0){
		printf ("\n  %d",mat[x][y]) ;
	}}}}


main(){
int i,x,j,op, mat[4][4],vet[4];
printf ("\n DIGITE OS VALORES DA MATRIZ");
for (i=0;i<3;i++){
	printf ("\n - %d -",i+1);
	for (x=0;x<3;x++){
		printf ("\n digite o valor da posicao (%d) ",x+1);
		scanf ("%d",&mat[i][x]);
	}
}
system("cls");
printf ("\n DIGITE OS VALORES DO VETOR");
for (j=0;j<3;j++){
		printf ("\n digite o valor da posicao (%d) ",j+1);
		scanf ("%d",&vet[j]);
	}
	system("cls");
// O whille pode não funcionar aqui com (TRUE) , mas voce pode testar para ficar mais organizado	
while (1==1){
op = menu();
   
if (op==1){
imprimir(mat);
}
else if(op==2){
soma(mat);	
}
else if(op==3){
media(mat);	
}
else if(op==4){
maior (mat);	
}
else if(op==5){
menor (mat);	
}
else if(op==6){
trsuper(mat);	
}
else if(op==7){
ordena(vet);
}
}
return 0;
}
