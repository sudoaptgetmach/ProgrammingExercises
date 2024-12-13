#include <stdio.h>

int main(){
    double a;

    scanf("%lf", &a);

    if(0 <= a && a <= 25.00){

        printf("Intervalo (0,25]\n");

    } 
    if(25.01 <= a && a <= 50.00){
        printf("Intervalo (25,50]\n");

    } 
    if(50.01 <= a && a <= 75.00){
        printf("Intervalo (50,75]\n");

    } 
    if(75.01 <= a && a <= 100){
        printf("Intervalo (75,100]\n");
    } 
    if(a > 100 || a < 0){
        printf("Fora de intervalo\n");
    }
    return 0;
}