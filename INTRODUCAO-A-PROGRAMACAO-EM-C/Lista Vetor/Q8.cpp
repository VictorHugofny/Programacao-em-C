#include<stdio.h>
int main(){

int i,v1[7],v2[7],v3[14];


for (i=0;i<7;i++){
printf ("(%d) Digite um valor : ",i+1);
scanf ("%d",&v1[i]);
}
for (i=0;i<7;i++){
printf ("(%d) Digite um valor : ",i+1);
scanf ("%d",&v2[i]);
}
for (i=0;i<7;i++){
v3[i]=v1[i];
printf ("\n (%d)",v3[i]);
v3[i]=v2[i];
printf ("\n (%d)",v3[i]);
 
}
return 0;
}
