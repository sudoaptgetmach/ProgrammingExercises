#include <stdio.h>

int main() {
	
	float media;
	int frequencia;
	
	printf("Insira a média do aluno: ");
	scanf("%f", &media);
	printf("Insira a frequência do aluno: ");
	scanf("%d", &frequencia);
	
	if (frequencia >= 75) {
		if (media >= 7) {
			printf("Aprovado");
		} else if (media >= 5) {
			printf("Recuperação.");
		} else {
			printf("Reprovado.");
		}
	} else {
		printf("Reprovado.");
	}
	
	printf("\nMédia: %.1f", media);
	printf("\nFrequência: %d%%", frequencia);
	
	return 0;
}
