/* Algoritmo para ler o valor de uma passagem aérea 
e o peso da mala do passageiro e mostrar o valor total 
que o passageiro deverá pagar considerando o despacho 
da mala. Até 23,0kg valor fixo de R$ 50,00, 
acima de 23,0kg R$ 50,00 + R$ 5,00 por quilo excedido. */

#include <stdio.h>
#include <math.h>

int main() {
	
	double valor, peso;
	
	printf("Informe o valor da passagem: \n");
	scanf("%lf", &valor);
	
	printf("Informe o peso da passagem: \n");
	scanf("%lf", &peso);
	
	if (valor < 0 || peso < 0) return 0;

	if (peso <= 23.0) {
		valor += 50.00;
	} else if (peso > 23.0 && peso < 24.0) {
		valor += 55;
	} else {
		valor += 50 + (5 * abs(peso - 23));
	}
	
	printf("Você deverá pagar R$ %.2lf.\n", valor);
	
	return 0;
}
