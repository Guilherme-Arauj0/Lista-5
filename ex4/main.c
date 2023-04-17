#include <stdio.h>
#include <locale.h>

#define maioridade  18

int main(){
	setlocale(LC_ALL, "");	
	
	
	char nome[20];
	int idade;
	
	printf("Insira seu Nome e sua Idade:  ");
	scanf("%s %d", &nome, &idade);
	
	if(idade>=maioridade){
		printf(" %s é maior de idade!");
	}	else if(idade<maioridade){
			printf(" %s é menor de idade!");
		}
	
	
	
	
	
	
	return 0;
}

