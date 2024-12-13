#include <stdio.h>

int main(){

    int x, y; 
    float price;

    if (scanf("%d %d", &x, &y) != 2) {
    printf("Erro\n");
    return 1;
    }


    if (x == 1){
        price = 4.00 * y;
    } else if (x == 2){
        price = 4.50 * y;
    } else if(x == 3){
        price = 5.00 * y;
    } else if(x == 4){
        price = 2.00 * y;
    } else if(x == 5){
        price = 1.50 * y;
    } else {
        printf("Você precisa escolher um valor entre 1 a 5.");
        return 0;
    }

    printf("Total: R$ %.2lf\n", price);

}