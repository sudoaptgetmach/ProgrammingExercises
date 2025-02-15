#include <stdio.h>

int main() {
	
	int a, b;
	
	printf("Insira um número inteiro válido para quantificar as linhas da matriz: ");
	scanf("%d", &a);
	
	printf("Insira um número inteiro válido para quantificar as colunas da matriz: ");
	scanf("%d", &b);
	
	int matriz[a][b];
	
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			matriz[i][j] = i + j;
		}
	}
	
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			 printf("[%d] ", matriz[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}