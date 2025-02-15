// matriz identidade variavel

#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int a, b;
	
	printf("Insira um número inteiro de linhas da matriz: \n");
	scanf("%d", &a);
	
	printf("Insira um número inteiro de colunas da matriz: \n");
	scanf("%d", &b);
	
	
	int matriz[a][b];
	
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			if (i != j) {
				matriz[i][j] = 0;	
			} else {	
				matriz[i][j] = 1;
			}
		}				
	}
	
	printf("\nMatriz %dx%d: \n", a, b);
	
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}

}