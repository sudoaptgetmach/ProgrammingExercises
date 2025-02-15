/* Preparar algoritmo para ler temperatura na escala Celsius 
   e imprimir equivalente em Fahrenheit: 
   fahrenheit = 1.8 * celsius + 32 */

#include <stdio.h>

int main() {
	
	double input;
	scanf("%lf", &input);
	
	double conversao = 1.8 * input + 32;
	
	printf("A temperatura %.1f em Fahrenheit é %.1f", input, conversao);
	return 0;
}