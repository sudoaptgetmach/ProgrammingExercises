/* Determinar o tipo de triângulo com base no comprimento dos dados.
Ler os três lados do triângulo (A, B e C, diferentes),
    A hipotenusa DEVE ser informada como o lado A
    (não é necessário determinar qual é o lado maior).
    Então, sendo A o lado maior, o algoritmo deverá retornar:
    Se A >= B + C      =>    nenhum triângulo é formado
    Se A2 = B2 + C2    =>    triângulo retângulo
    Se A2 > B2 + C2       =>     triângulo obtusângulo
    Se A2 < B2 + C2    =>     triângulo acutângulo */

#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;

    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);

    if (a < b || a < c) {
        printf("O maior lado deve ser o primeiro.\n");
        return 0;
    }
    
    if (a >= (b + c)) {
        printf("Nenhum triângulo formado.");
    } else if (pow(a, 2) == (pow(b,2) + pow(c,2))) {
        printf("Triângulo retângulo.");
    } else if (pow(a, 2) > (pow(b,2) + pow(c,2))) {
        printf("Triângulo obtusângulo.");
    } else if (pow(a, 2) < (pow(b,2) + pow(c,2))) {
        printf("Triângulo acutângulo.");
    }

    return 0;
}
