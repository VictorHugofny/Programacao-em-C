#include <stdio.h>

struct horario
{ // (definir_estrutura do tipo horario
// estrutura pd ter varios tipos de dados
  int horas;
  int minutos;
  int segundos;
  double teste;
  char letra;
};

int main (){

struct horario teste (struct horario x); // funcão
// estrutura função chamando

struct horario agora; // declara_estrutura de nome "agora"
agora.horas = 15; // manipulando as variaveis
agora.minutos = 17; // da estrutura usando o "."
agora.segundos = 30;

struct horario proxima;
proxima = teste (agora);

printf ("%i %i %i  \n", proxima.horas, proxima.minutos, proxima.segundos);

return 0;
}
struct horario teste (struct horario x){
printf ("%i %i %i  \n", x.horas, x.minutos, x.segundos);

x.horas = 100;
x.minutos = 100;
x.segundos = 100;
return x;
}
