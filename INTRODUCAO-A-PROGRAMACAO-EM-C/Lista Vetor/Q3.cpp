#include<stdio.h>
int main(void)
{
  int i, Q[10],tem = 0,mat;
  // declarando e inicializando o vetor notas
  
  
  for( i = 0 ; i <= 9; i++)
  {
  	printf ("(%d)Digite sua matricula : ",i+1);
    scanf ("%d",&Q[i]);
  }
  
  printf ("digite a matricula que deseja procurar: ");
  scanf ("%d",&mat);
  
for( i = 0 ; i <= 9; i++){
	
		if (mat == Q[i]){
  		tem = tem + 1;
		}
}			
  
	if (tem > 0){
  	printf ("ACHOU");}
  		else {
  		printf ("NÃO TEM");
		}
  
  return 0;
}
