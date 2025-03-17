#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    printf("%d\n", n); // Print the original amount

    int notas100 = n / 100;
    n %= 100;
    printf("%d nota(s) de R$ 100,00\n", notas100);

    int notas50 = n / 50;
    n %= 50;
    printf("%d nota(s) de R$ 50,00\n", notas50);

    int notas20 = n / 20;
    n %= 20;
    printf("%d nota(s) de R$ 20,00\n", notas20);

    int notas10 = n / 10;
    n %= 10;
    printf("%d nota(s) de R$ 10,00\n", notas10);

    int notas5 = n / 5;
    n %= 5;
    printf("%d nota(s) de R$ 5,00\n", notas5);

    int notas2 = n / 2;
    n %= 2;
    printf("%d nota(s) de R$ 2,00\n", notas2);

    printf("%d nota(s) de R$ 1,00\n", n); // Remaining amount is all in R$ 1 notes

    return 0;
}