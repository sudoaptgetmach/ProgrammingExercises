/* The input consists of a line with four integers T1, T2, T3, T4, 
indicating the number of taken from each of the four strips (2 ≤ T' ≤ 6).

Saída

Your program should produce a single line containing a single integer 
indicating the maximum number of devices that can be 
connected to the energy in the same instant. */

#include <stdio.h>

int main() {
	
	int a, b, c, d;
	
	scanf("%d %d %d %d", &a, &b, &c, &d);
	
	int resultado = (a + b + c + d) - 3;
	
	printf("%d", resultado);
	
	return 0;
}