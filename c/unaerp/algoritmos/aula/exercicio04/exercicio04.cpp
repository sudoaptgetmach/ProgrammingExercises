#include <stdio.h>

int main() {

    int a, b, c, d, max, min;

    printf("Digite o primeiro valor a ser comparado: ");
    scanf("%d", &a);

    printf("Digite o segundo valor a ser comparado: ");
    scanf("%d", &b);
    
    printf("Digite o terceiro valor a ser comparado: ");
    scanf("%d", &c);

    printf("Digite o quarto valor a ser comparado: ");
    scanf("%d", &d);

    max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    if (d > max) max = d;

    min = a;
    if (min > b) min = b;
    if (min > c) min = c;
    if (min > d) min = d;

    printf("O maior número é: %d\n", max);
    printf("O menor número é: %d\n", min);

    return 0;
}