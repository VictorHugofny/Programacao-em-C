#include <stdio.h>
#include<string.h>

typedef struct{
	
	char nome[100];
	char rg[11];
	char data_nascimento[14];
	
} Pessoa;

	Pessoa cria_pessoa(char nome[], char rg[], char data_nascimento[]){
		
		Pessoa p;
		
		strcpy (p.nome, nome);
		strcpy (p.rg, rg);
		strcpy (p.data_nascimento, data_nascimento);
		
		return p;
	}
		
		int main( int argc, char *argv[]){
			
			Pessoa uma_pessoa;
			
			uma_pessoa = cria_pessoa ("Nome da pessoa", "9876543210", "10/10/1970");
			
			printf("%s %s %s", uma_pessoa.nome, uma_pessoa.rg, uma_pessoa.data_nascimento);
			
			return 0;
		}
