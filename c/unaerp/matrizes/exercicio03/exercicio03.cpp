#include <stdio.h>
#include <stdlib.h>

int main() {
	int matriz[9][9];
	int matriz2[6][6];
	
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			matriz[i][j] = i + j;
		}				
	}
	
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			matriz2[i][j] = i + j;
		}				
	}
	
	printf("\nMatriz 9x9: \n");
	
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
	
	printf("\nMatriz 6x6: \n");
	
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			printf("%d ", matriz2[i][j]);
		}
		printf("\n");
	}
}