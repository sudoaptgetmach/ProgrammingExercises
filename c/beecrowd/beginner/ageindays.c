#include <stdio.h>

int main(){
    int age, years = 0, months = 0, days = 0;

    scanf("%d", &age);

    years = age / 365;
    age %= 365;

    months = age / 30;
    age %= 30;

    days = age / 1;

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", years, months, days);

}