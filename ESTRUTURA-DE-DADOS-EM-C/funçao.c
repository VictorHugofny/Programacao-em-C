#include <stdio.h>

int main (void){
float x,y, resultado, result;
int i, j, matriz [3] [3];

float multiplicar (float a, float b); //declarar 
int matriza (int mat[3][3]); // funçoes 

printf ("\n digite um valor para X: ");
scanf ("%f",&x);
printf ("\n digite um valor para Y: ");
scanf ("%f" ,&y);


resultado = multiplicar(x,y);

printf ("\n %f", resultado);

for (i=0; i<3; i++){ // matriz(receber valores)
  for (j = 0; j< 3; j++){
    printf ("\n(%d) digite os valores da matriz : ",i+1);
    scanf ("%d",&matriz[i][j]);
  }printf ("\n");
  }
matriza(matriz); // chamar função matriz

  return 0;
}

float multiplicar (float a, float b){// funcao multiplicar
  float result;

  result = a * b;

  return result;
}

int matriza (int x[3][3]){ // funçao matriz
  int i,j;
  for (i=0; i<3; i++){
  for (j = 0; j< 3; j++){
    printf ("%d ",x[i][j]);
  }
  printf ("\n");
  }

}