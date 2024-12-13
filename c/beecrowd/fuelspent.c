#include <stdio.h>

int main(){
    int time, averageSpeed;
    double distance, liters;

    scanf("%i", &time);
    scanf("%i", &averageSpeed);

    distance = (averageSpeed * time);

    liters = (distance / 12);

    printf("%.3lf\n", liters);

}