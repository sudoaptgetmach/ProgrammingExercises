// Exercício: Cálculo da conta de água de um consumidor.
// O programa deve:
// - Ler o código do consumidor (inteiro com 4 dígitos).
// - Ler o tipo de instalação: 1 (Residencial), 2 (Comercial) ou 3 (Industrial).
// - Ler o consumo mensal de água (em m³).
// - Calcular a conta de acordo com a faixa de consumo e tipo de instalação:
//     • Tipo 1: R$ 5,00 + R$ 10,00 por m³
//     • Tipo 2: R$ 1000,00 até 80 m³; acima disso, R$ 15,00 por m³ excedente
//     • Tipo 3: R$ 1500,00 até 100 m³; acima disso, R$ 20,00 por m³ excedente
// - Exibir: tipo de instalação, consumo e valor da conta final.

#include <stdio.h>

int main() {
	int codigo, tipo;
	float consumo, taxa, acrescimo;
	
	printf("Insira o código do consumidor (4 digitos): ");
	scanf("%d", &codigo);
	
	if (!(codigo >= 1000 && codigo <= 9999)) {
		printf("O código precisa ter 4 digitos.");
		return 0;
	}
	
	printf("Insira o tipo de instalação (1 - Residencial, 2 - Comercial, 3 - Industrial): \n");
	scanf("%d", &tipo);
	
	printf("Insira o consumo mensal de água: \n");
	scanf("%f", &consumo);
	
	switch (tipo) {
		case 1:
			taxa = 5 + (10 * consumo);
			break;
		case 2:
			if (consumo > 80)
				acrescimo = 15 * (consumo - 80);
				
			taxa = 1000 + acrescimo; 
			break;
		case 3:
			if (consumo > 100)
				acrescimo = 20 * (consumo - 100);
				
			taxa = 1500 + acrescimo; 
			break;
		default:
			printf("Opção inválida.");
			return 0;
	}
	
	printf("Instalação: %d  ", tipo);
	printf("Consumo: %.2f m3 ", consumo);
	printf("Conta: R$ %.2f  ", taxa);
	
	return 0;
}
