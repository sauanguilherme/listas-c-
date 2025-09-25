#include <stdio.h>
#define PI 3.14159

int main() {
    double r, area;
    printf("Digite o valor do raio do circulo: ");
    scanf("%lf", &r);
    area = PI * r * r;
    printf("AREA = %.3lf\n", area);
    return 0;
}
