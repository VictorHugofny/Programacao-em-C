#include <stdio.h>
 
int idade(int y,int x,int j){
int ano1;
ano1 = 2019 - j;

if (x >= 8 ){
	ano1 = ano1 - 1;
	}
printf ("voce tem (%d)",ano1);
}
int main ()
{
    int dia,mes,ano;
 
    printf ("Digite o dia de nascimento: ");
    scanf ("%d", &dia);
    printf ("digite o Mes de nascimento: ");
    scanf ("%d",&mes);
    printf ("digite o ano de nascimento: ");
    scanf ("%d",&ano);

 
    idade(dia,mes,ano);
    
    return 0;
 }
