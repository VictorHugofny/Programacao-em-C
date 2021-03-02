#include <stdio.h>

int main (){
  int x = 10;
  double y = 20.50  ;
  char z = "a";

  int *pi = &x; // apontar para o endereço de X
  // pi = &x faz a msm coisa // *pi (valor de pi)
  double *pd = &y; 
  char *pc = &z;

  printf ("\nENDEREÇO X = %d - Valor x = %d", pi, *pi);
  printf ("\nENDEREÇO Y = %d- Valor Y = %f", pd, *pd);  
  printf ("\nENDEREÇO z = %d - Valor z = %c", pc, *pc);
  return 0;
}