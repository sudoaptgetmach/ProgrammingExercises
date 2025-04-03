#include <stdio.h>

int main() {
    int a, b, c;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if (a > (b + c) || b > (a + c) || c > (a + b)) {
        printf("Não forma triângulo.\n");
        return 0;  
    }

    if (a == b && b == c) {
        printf("Equilátero.\n");
    } else if (a == b || b == c || a == c) {
        printf("Isósceles.\n");
    } else {
        printf("Escaleno.\n");
    }

    return 0;
}
