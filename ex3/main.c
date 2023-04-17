#include <stdio.h>
#include <locale.h>

#define media(a,b,c,d) ((a+b+c+d)/4)

int main(){
	setlocale(LC_ALL, "");	
	
	int n1, n2, n3, n4;
	
	
	printf("Digite quatro numeros inteiros: ");
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

	
	printf("Média dos números inseridos:  %d", media(n1,n2,n3,n4));	
	
	
	
	
	
	
	return 0;
}
