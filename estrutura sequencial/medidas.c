#include <stdio.h>

int main() {
    double A, B, C;
    printf("Digite a medida A: ");
    scanf("%lf", &A);
    printf("Digite a medida B: ");
    scanf("%lf", &B);
    printf("Digite a medida C: ");
    scanf("%lf", &C);
    double area_quadrado = A * A;
    double area_triangulo = (A * B) / 2.0;
    double area_trapezio = ((A + B) * C) / 2.0;
    printf("AREA DO QUADRADO = %.4lf\n", area_quadrado);
    printf("AREA DO TRIANGULO = %.4lf\n", area_triangulo);
    printf("AREA DO TRAPEZIO = %.4lf\n", area_trapezio);
    return 0;
}
