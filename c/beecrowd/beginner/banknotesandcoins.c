#include <stdio.h>

int main(){
    double n;
    int moedas, n100, n50, n20, n10, n5, n2, m1, m50, m25, m10, m05, m01;
    

    scanf("%lf", &n);
    moedas = (int)(n * 100);

    n100 = moedas / 10000;
    moedas %= 10000;

    n50 = moedas / 5000;
    moedas %= 5000;

    n20 = moedas / 2000;
    moedas %= 2000;

    n10 = moedas / 1000;
    moedas %= 1000;

    n5 = moedas / 500;
    moedas %= 500;

    n2 = moedas / 200;
    moedas %= 200;

    m1 = moedas / 100;
    moedas %= 100;

    m50 = moedas / 50;
    moedas %= 50;

    m25 = moedas / 25;
    moedas %= 25;    

    m10 = moedas / 10;
    moedas %= 10;  

    m05 = moedas / 05;
    moedas %= 05; 

    m01 = moedas / 01;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", n100);
    printf("%d nota(s) de R$ 50.00\n", n50);
    printf("%d nota(s) de R$ 20.00\n", n20);
    printf("%d nota(s) de R$ 10.00\n", n10);
    printf("%d nota(s) de R$ 5.00\n", n5);
    printf("%d nota(s) de R$ 2.00\n", n2);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", m1);
    printf("%d moeda(s) de R$ 0.50\n", m50);
    printf("%d moeda(s) de R$ 0.25\n", m25);
    printf("%d moeda(s) de R$ 0.10\n", m10);
    printf("%d moeda(s) de R$ 0.05\n", m05);
    printf("%d moeda(s) de R$ 0.01\n", m01);

}