#include <stdio.h>

int main() {
    double largura, comprimento, valor_m2, area, preco;
    printf("Largura do terreno: ");
    scanf("%lf", &largura);
    printf("Comprimento do terreno: ");
    scanf("%lf", &comprimento);
    printf("Valor do metro quadrado: ");
    scanf("%lf", &valor_m2);
    area = largura * comprimento;
    preco = area * valor_m2;
    printf("Area do terreno = %.2lf\n", area);
    printf("Preco do terreno = %.2lf\n", preco);
    return 0;
}
