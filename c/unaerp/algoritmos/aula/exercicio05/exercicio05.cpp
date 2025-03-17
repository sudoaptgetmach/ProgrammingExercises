#include <stdio.h>

int main() {
	
	float media;
	int frequencia;
	
	printf("Insira a média do aluno: ");
	scanf("%f", &media);
	printf("Insira a frequência do aluno: ");
	scanf("%d", &frequencia);
	
	if (media >= 7) {
		if (frequencia >= 75) {
			printf("Aprovado.");
		} else {
			printf("Reprovado.");	
		}
	} else if (media >= 5) {
		if (frequencia >= 75) {
			printf("Recuperação");
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

