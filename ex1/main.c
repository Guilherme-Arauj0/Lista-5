#include <stdio.h>
#include <locale.h>

#define soma(x, y) (x + y)
#define sub(x, y) (x - y)
#define div(x, y) (x / y)
#define mult(x, y) (x * y)

int main(){
	setlocale(LC_ALL, "");	
	
	int n1, n2;
	
	printf("digite o primeiro n�mero: \n\n");
	scanf("%d", &n1);
	
	printf("digite o segundo n�mero: \n\n");
	scanf("%d", &n2);
	
	printf("                   Opera��es:\n\n\n");
	printf("Soma: %d\n\n", soma(n1,n2));
	printf("Subtra��o: %d\n\n", sub(n1,n2));
	printf("Divis�o: %d\n\n", div(n1,n2));
	printf("Multiplica��o: %d\n\n", mult(n1,n2));
	
	
	
	
	return 0;
}


