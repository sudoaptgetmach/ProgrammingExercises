#include <stdio.h>
#include <stdlib.h>

int main() {
	
	double altura;
	int idade;
	
	printf("Informe sua altura [em metros]: \n");
	scanf("%lf", &altura);
	
	printf("Informe sua idade: \n");
	scanf("%d", &idade);
	
	printf("Voce tem %.2lf de altura\n", altura);
	printf("Voce tem %d anos.", idade);
		
	return 0;
}
