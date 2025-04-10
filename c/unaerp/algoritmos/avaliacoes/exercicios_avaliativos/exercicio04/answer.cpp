/*  A Companhia de Carros Usados João Honesto paga a seus empregados
    uma comissão fixa de R$ 800,00 para vendas de 6 a 10 carros.
    Se o vendedor vender de 11 a 19 carros, a comissão passa a ser 4,0%
    do valor total das vendas. Se o número de carros vendidos for maior
    ou igual a 20, a comissão passa a ser de 6% do valor total vendido.
    Preparar um algoritmo para ler o número de carros vendidos e o valor
    total das vendas de um determinado vendedor */
    
#include <stdio.h>

int main() {
	int c;
	double valor;
	
	printf("Insira o valor de carros vendidos: ");
	scanf("%d", &c);
	
	printf("Insira o valor total das vendas: ");
	scanf("%lf", &valor);
	
	const double comissao = (c >= 20) ? 0.06 // >= 20 6%
	: (c >= 11) ? 0.04 // 11 a 19 carros - 4%
	: (c >= 6) ? 800 // 6 a 10 carros - 800 reais
	: 0;
	
	printf("Total de veículos vendidos: %d\n", c);
	printf("Valor total das vendas: R$%.2lf\n", valor);
	printf("Valor total da comissão: R$%.2lf\n", (c < 11) ? comissao : valor*comissao);
	
	return 0;
}
