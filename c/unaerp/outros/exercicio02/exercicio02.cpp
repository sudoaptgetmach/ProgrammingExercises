// Contagem regressiva e progressiva

#include <stdio.h>

int main() {
	
	int input;
	
	scanf("%d", &input);

	
	printf("\nContagem progressiva até o número %d: \n", input);
	
	for (int i = 0; i <= input; i++) {
		printf("%d\n", i);
	}
	
	printf("\nContagem regressiva a partir d0o número %d: \n", input);
	
	for (int i = input; i >= 0; i--) {
		printf("%d\n", i);
	}
	
	return 0;
}