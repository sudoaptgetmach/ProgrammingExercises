// tabuada

#include <stdio.h>

int main() {
	
	int input;
	
	scanf("%d", &input);
	
	printf("A tabuada do número %d eh: \n", input);
	
	for (int i = 1; i <= 10; i++) {
		printf("%d x %d = %d\n", input, i, input * i);
	}
	
	return 0;
}