#include <stdio.h>

int main(){
    int X;
    double Y, consumption;

    scanf("%i", &X);
    scanf("%lf", &Y);

    consumption = (X / Y);

    printf("%.3lf km/l\n", consumption);

}