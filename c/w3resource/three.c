#include <stdio.h>
#include <math.h>

int main() {
    int sum;
    int i;
    int input;  

    scanf("%i", &input);  

    for (i = 0; i <= input; i++) {
        sum = sum + i;  
        printf("%i\n", i);

    }

    printf("A soma dos números naturais até %d é %d\n", input, sum);
}