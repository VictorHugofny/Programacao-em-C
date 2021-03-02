#include<stdio.h>

int teste(int x){
	int teste;
	teste = 5;
	 return (teste);
}

int main(){
int num,alear;

printf ("digite um numero: ");
scanf ("%d",&num);

alear = teste(num);
printf ("%d",alear);



}

