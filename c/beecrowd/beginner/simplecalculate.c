#include <stdio.h>

int main(){
    int id, units, id2, units2;
    double price, price2, toPay;

    scanf("%i %i %lf", &id, &units, &price);
    scanf("%i %i %lf", &id2, &units2, &price2);

    toPay = (units * price) + (units2 * price2);

    printf("VALOR A PAGAR: R$ %.2lf\n", toPay);

}