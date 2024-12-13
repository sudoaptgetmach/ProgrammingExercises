#include <stdio.h>

int main() {
    int a;
    int array[10];
    int numSoma = 0;

    for (a = 0; a <= 10; a++) {
        array[a-1] = a;
    }


    for (a = 0; a <= 10; a++) {
        printf("%i\n", array[a]);
        numSoma += array[a];

    }
}