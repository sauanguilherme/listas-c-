#include <stdio.h>
int main() {
    double a, b, c, maior;
    printf("Digite as tres distancias:\n");
    scanf("%lf %lf %lf", &a, &b, &c);
    maior = a;
    if (b > maior) maior = b;
    if (c > maior) maior = c;
    printf("MAIOR DISTANCIA = %.2lf\n", maior);
    return 0;
}
