#include <stdio.h>

int main() {
	float salario;
	int filhos;
	
	printf("Informe o salário [em reais]: \n");
	scanf("%f", &salario);
	
	printf("Informe a quantidade de filhos: \n");
	scanf("%d", &filhos);
	
	printf("Você %d filhos e recebe R$ %.2f.\n", filhos, salario);
	
	if (salario <= 806.60) {
		salario += (41.37 * filhos);
	} else {
		salario += (29.17 * filhos);
	}
	
	printf("Portanto, você receberá R$ %.2f", salario);
	
	system("pause");
}
