#include <stdio.h>

int main() {
	
	int a, b, c;
	
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	
	int matriz[1][3] = {
		{a, b, c},
	};
	
	for (int i = 0; i < 1; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", matriz[i][j]);
		}
		printf("\n"); 
	}
	
	return 0;
}