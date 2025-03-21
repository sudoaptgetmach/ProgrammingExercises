#include <stdio.h>

int main(){
    double pi = 3.14159;
    double A, raio;

    scanf("%lf", &raio);

    A = pi * (raio * raio);

    printf("A=%.4f\n", A);


}