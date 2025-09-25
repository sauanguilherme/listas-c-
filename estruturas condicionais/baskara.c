#include <stdio.h>
#include <math.h>
int main() {
    double a, b, c, delta, x1, x2;
    printf("Coeficientes a, b, c:\n");
    scanf("%lf %lf %lf", &a, &b, &c);
    delta = b*b - 4*a*c;
    if (a == 0 || delta < 0) {
        printf("Esta equacao nao possui raizes reais\n");
    } else {
        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b - sqrt(delta)) / (2*a);
        printf("X1 = %.4lf\nX2 = %.4lf\n", x1, x2);
    }
    return 0;
}
