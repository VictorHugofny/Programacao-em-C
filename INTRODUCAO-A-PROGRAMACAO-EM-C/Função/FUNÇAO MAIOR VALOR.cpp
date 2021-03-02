#include <stdio.h>
 
 int TESTE(int a)
 {
 	if (a%2 == 0){
 		printf ("par");
	 }
	 else {
	 	printf ("impar");
	 }
}
 int main ()
 {
    int n1,n2,resp;
 
    printf ("Digite um número ");
    scanf ("%d", &n1);

 
    TESTE(n1);
    
    return 0;
 }
