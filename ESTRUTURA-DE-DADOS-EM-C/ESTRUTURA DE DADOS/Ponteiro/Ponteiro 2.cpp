#include <stdio.h>

int main(int argc, char *argv[]){

int x=4;
int *pi;

pi = &x;

printf("pi aponta para: %d\n", pi);
pi+= 1;
printf("pi aponta para: %d\n", pi);
pi-= 2;
printf("pi aponta para: %d\n", pi);

return 0;
}
