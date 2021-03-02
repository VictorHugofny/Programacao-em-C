#include<stdio.h>
int main(){

int i,v1[8],v2[8],valor;


for (i=0;i<8;i++){
printf ("(%d) Digite um valor : ",i+1);
scanf ("%d",&v1[i]);
}
for (i=0;i<8;i++){
v2[i] = v1[i];
printf ("\n %d",v2[i]);
}
return 0;
}
