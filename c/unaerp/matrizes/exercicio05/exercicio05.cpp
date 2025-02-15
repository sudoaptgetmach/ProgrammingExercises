// matriz identidade 3x3

#include <stdio.h>
#include <stdlib.h>

int main() {
	int matriz[3][3];
	
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (i != j) {
				matriz[i][j] = 0;	
			} else {	
				matriz[i][j] = 1;
			}
		}				
	}
	
	printf("\nMatriz 3x3: \n");
	
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}

}