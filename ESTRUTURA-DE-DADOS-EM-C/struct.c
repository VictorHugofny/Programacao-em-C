#include <stdio.h>

int main (){

struct horario
{ // (definir_estrutura do tipo horario
// estrutura pd ter varios tipos de dados
  int horas;
  int minutos;
  int segundos;
  double teste;
  char letra;
};

struct horario agora; // declara_estrutura de nome "agora"
agora.horas = 15; // manipulando as variaveis
agora.minutos = 17; // da estrutura usando o "."
agora.segundos = 30;

struct horario depois; // uma estrutura de nome "depois"
depois.horas = agora.horas + 10; //estrutura manipulando
depois.minutos = agora.minutos;  // outra estrutura
depois.teste = 50.55 / 123; 
depois.letra = 'a' ;

printf ("\n%d : %d : %d",agora.horas, agora.minutos, agora.segundos);
printf ("\n %d", depois.horas);//horas(depois+horas.agora)
printf ("\n%d", depois.minutos);
printf ("\n %c", depois.letra);
printf ("\n%f", depois.teste);



return 0;

} 