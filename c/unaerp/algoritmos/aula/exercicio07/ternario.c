#include <stdio.h>
#include <math.h>

int main() {

    double peso, altura, n;

    printf("Insira sua altura: ");     
    scanf("%lf", &altura);
    printf("Insira seu peso: ");     
    scanf("%lf", &peso);

    n = peso/(altura*altura);

    const char *categoria = (n < 18) ? "Abaixo do peso."
    : (n <= 25) ? "Peso normal."
    : (n <= 30) ? "Acima do peso."
    : (n <= 35) ? "Obeso."
    : "Obesidade mórbida.";
    
    printf("Seu IMC é: %.1lf\n", n);
    printf("%s\n", categoria);
    
    return 0;
}