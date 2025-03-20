#include <stdio.h>

int main() {
	int n;
	
	printf("Insira a quantidade de pontos: ");
	scanf("%d", &n);
	
	switch (n) {
		case 2:
			printf("Grau leve.");
			break;
		case 3:
			printf("Grau moderado.");
			break;
		case 5:
			printf("Grau grave.");
			break;
		case 7:
			printf("Grau gravíssimo.");
			break;
		default:
			printf("Valor inválido.");
			return 0;
	}
}
