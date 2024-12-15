#include <stdio.h>

int main(){
    double A, B, C, triangle, circle, trapezium, square, rectangle, pi;

    pi = 3.14159;

    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);

    triangle = (A * C)/2;
    printf("TRIANGULO: %.3lf\n", triangle);

    circle = pi * (C * C);
    printf("CIRCULO: %.3lf\n", circle);

    trapezium = (A + B)/2 * C;
    printf("TRAPEZIO: %.3lf\n", trapezium);

    square = B*B;
    printf("QUADRADO: %.3lf\n", square);

    rectangle = A*B;
    printf("RETANGULO: %.3lf\n", rectangle);

}