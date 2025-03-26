#include <stdio.h>

int bombaDeCombustivel(int n, double l);

int main() {
    int input;
    double litros;
    
    printf("Insira a opção [1 - Gasolina, 2 - Álcool]: ");
    scanf("%d", &input);
    
    printf("Insira a litragem: ");
    scanf("%lf", &litros);
    
    switch (input) {
        case 1:
        case 2:
            bombaDeCombustivel(input, litros);
            break;
        default:
            printf("Opção inválida.\n");
            return 0;
    }
}

int bombaDeCombustivel(int n, double l) {
    double preco = (n == 1) ? 4.99 : 5.99;
    double desconto = 0;
    
    if (n == 2 && l < 20) {
        desconto = preco * 0.20;
    } else {
        desconto = preco * 0.25;
    }
    
    if (n == 1 && l < 20) {
        desconto = preco * 0.20;
    } else {
        desconto = preco * 0.25;
    }
    
    double valorSemDesconto = preco * l;
    double valorFinal = valorSemDesconto - desconto;

    printf("Valor sem desconto: %.2lf\n", valorSemDesconto);
    printf("Valor do desconto: %.2lf\n", desconto);
    printf("Valor final: %.2lf\n", valorFinal);
    
    return 0;
}
