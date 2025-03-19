#include<stdio.h>

int main() {

    double altura, peso;
    double n;
    
    printf("Insira sua altura: ");     
    scanf("%lf", &altura);
    printf("Insira seu peso: ");     
    scanf("%lf", &peso);

    n = peso/(altura*altura);

    printf("Seu IMC é: %.1lf\n", n);

    if (n > 35)
        printf("Obesidade mórbida.\n");
    else if (n >= 30)
        printf("Obeso.\n");
    else if (n >= 25)
        printf("Acima do peso.\n");
    else if (n >= 18.5)
        printf("Peso normal.\n");
    else
        printf("Abaixo do peso.\n");

    return 0;
}