#include <stdio.h>

int main() {
    int n;

    printf("Insira a nota do produto [1-5]: ");
    scanf("%d", &n);

    switch (n) {
        case 1:
            printf("Ruim.\n");
            break;
        case 2:
            printf("Fraco.\n");
            break;
        case 3:
            printf("Regular.\n");
            break;
        case 4:
            printf("Bom.\n");
            break;
        case 5:
            printf("Excelente.\n");
            break;
        default:
            printf("Valor inválido.\n");
            return 0;
    }
}