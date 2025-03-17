#include <stdio.h>

int main(){
    char sellerName[10];
    double fixedSalary, salesTotal, totalSalary;

    scanf("%s", &sellerName);
    scanf("%lf", &fixedSalary);
    scanf("%lf", &salesTotal);

    totalSalary = fixedSalary + (salesTotal * 0.15);

    printf("TOTAL = R$ %.2lf\n", totalSalary);

}