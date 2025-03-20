#include <stdio.h>

int main() {
	double salario, desconto = 0;
	
	printf("Informe seu salário: ");
	scanf("%lf", &salario);
	
	if (salario > 5189.82) {
		desconto = 570.88;
	} else if (salario > 2594.93) {
		desconto = salario * 0.11;
	} else if (salario > 1556.95) {
		desconto = salario * 0.09;
	} else {
		desconto = salario * 0.08;
	}
	
	printf("Seu salário original é: R$ %.2lf\n", salario);
	printf("Seu desconto é: R$ %.2lf\n", desconto);
	printf("Novo salário: R$ %.2lf\n", (salario-desconto));
	
	return 0;
}
