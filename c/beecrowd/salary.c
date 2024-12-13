#include <stdio.h>

int main(){
    int id, workedHours;
    double perHour, salary;

    scanf("%i", &id);
    scanf("%i", &workedHours);
    scanf("%lf", &perHour);

    salary = (workedHours * perHour);

    printf("NUMBER = %i\n", id);
    printf("SALARY = U$ %.2lf\n", salary);

}