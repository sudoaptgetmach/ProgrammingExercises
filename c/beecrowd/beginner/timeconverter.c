#include <stdio.h>

int main(){
    int n, hora = 0, minutos = 0, segundos = 0;

    scanf("%d", &n);

        hora = n / 3600;
        n %= 3600;

        minutos = n / 60;
        n %= 60;

        segundos = n;
        printf("%d:%d:%d\n", hora, minutos, segundos);

}