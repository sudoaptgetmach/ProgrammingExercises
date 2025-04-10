/*
Desenvolva um algoritmo que leia a profundidade da rocha em um determinado terreno de
baixa resistência. Se a profundidade for até 2 metros, recomende "radier"; se for maior que
2m e menor ou igual a 5m, recomende "brocas", se for maior que 5m, recomende "estacas". 
O algoritmo deve imprimir a profundidade da rocha no terreno e o tipo de fundação recomendado.
*/

#include <stdio.h>

int main() {
	int p;
	
	printf("Insira a profundidade da rocha: ");
	scanf("%d", &p);
	
	const char *r = (p > 5) ? "Estacas" :
					(p > 2) ? "Brocas"  :
					"Radier";
					
	printf("Profundidade da rocha: %d\n", p);
	printf("Profundidade da rocha: %s", r);
	
	return 0;
}
