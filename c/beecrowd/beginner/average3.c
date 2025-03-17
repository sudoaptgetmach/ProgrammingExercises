#include <stdio.h>

int main(){
    double N1, N2, N3, N4, average;

    scanf("%lf %lf %lf %lf", &N1, &N2, &N3, &N4);

    average = ((N1*2) + (N2*3) + (N3*4) + (N4*1)) / 10;
    printf("Media: %.1lf", average);

    if (average >= 7.0) {
        printf("\nAluno aprovado.\n");
    } else if (average < 5.0) {
        printf("\nAluno reprovado.\n");
    } else {
        printf("\nAluno em exame.\n");
        double examScore;
        scanf("%lf", &examScore);
        printf("Nota do exame: %.1lf\n", examScore);
        average = (average + examScore) / 2;
        if (average >= 5.0) {
            printf("Aluno aprovado.\n");
        } else {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1lf\n", average);
    }
}