/* Algoritmo para ler a média e a frequência de um aluno e retornar se
o aluno foi aprovado, reprovado ou ficou de recuperação, incluindo
a média na resposta. Os critérios de avaliação são: 
Com média >= 7.0 e presença >=75 o aluno está aprovado; 
Com média >= 5 e média < 7 e frequência >=75 o aluno está de recuperação; 
Com média < 5 ou frequência < 75 o aluno está reprovado. */


#include <stdio.h>

int main() {
	
	double media;
	int frequencia;
	
	printf("Digite a média do aluno (máximo 10 e não pode ser negativo): ");
	scanf("%lf", &media);
	
	printf("Digite a frequência do aluno (máximo 100 e não pode ser negativo): ");
	scanf("%d", &frequencia);
	
	if (frequencia < 0 || media < 0 || media > 10 || frequencia > 100) {
		printf("Os números precisam obedecer os requisitos informados.");
		return 0;
	}
	
	if (media >= 7 && frequencia >= 75) {
		printf("O aluno foi aprovado.");
	} else if (media >= 5 && media <= 7 && frequencia >= 75) {
		printf("O aluno está de recuperação.");
	} else {
		printf("O aluno foi reprovado.");
	}
	
	return 0;
}