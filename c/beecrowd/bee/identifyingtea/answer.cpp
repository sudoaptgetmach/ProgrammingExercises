#include <stdio.h>

int main() {
    int type, a, b, c, d, e, resultado = 0;

    scanf("%d", &type);
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    int lista[] = {a, b, c, d, e};
    int tamanho = sizeof(lista) / sizeof(lista[0]);

    for (int i = 0; i < tamanho; i++) {
        if (lista[i] == type) {
            resultado++;
        }
    }

    printf("%d\n", resultado);
    return 0;
}

