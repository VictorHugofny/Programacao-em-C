#include<stdio.h>

int main() {

    /*Escrever um algoritmo que l� um vetor N(20) e o escreve. Troque, a
    seguir, o 1� elemento com o �ltimo, o 2� com o pen�ltimo etc. at� o 10�
    com o 11� e escreva o vetor N assim modificado. */

    //1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 

    
    void trocarElemento(int v[]);
    int v[20];

    for(int i = 1; i <= 20; i++) {
        scanf("%i", &v[i]);
    }

    trocarElemento(v);

    return 0 ;
}

void trocarElemento(int v[]) {
    
    for(int i = 20; i > 10; i--) {
        printf("\n%i", v[i]);
    }
}
