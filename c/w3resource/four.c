#include <stdio.h>

int main() {
    // int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10;

    // scanf("%d %d %d %d %d %d %d %d %d %d", &num1, &num2, &num3, &num4, &num5, &num6, &num7, &num8, &num9, &num10);

    // int sum = (num1 + num2 + num3 + num4 + num5 + num6 + num7 + num8 + num9 + num10);
    // double average = (sum / 10);

    // printf("A soma dos dez números é: %d\n", sum);
    // printf("The average is: %.1f\n", average);

    int i, n, sum = 0;
    double avg;

    printf("Digite 10 números inteiros: \n");

    for (i = 1; i <= 10; i++){
        
        scanf("%d", &n);
        sum += n;

    }

    avg = sum / 10.0;
    printf("A soma dos 10 números inteiros é: %d\n", sum);
    printf("A média dos 10 números inteiros é: %.1f\n", avg);

}