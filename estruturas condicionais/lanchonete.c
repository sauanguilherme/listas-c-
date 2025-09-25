#include <stdio.h>
int main() {
    int codigo, qtd;
    double preco;
    printf("Codigo do produto:\n");
    scanf("%d", &codigo);
    printf("Quantidade comprada:\n");
    scanf("%d", &qtd);
    if (codigo == 1) preco = 5.0;
    else if (codigo == 2) preco = 3.5;
    else if (codigo == 3) preco = 4.8;
    else if (codigo == 4) preco = 8.9;
    else preco = 7.32;
    printf("Valor a pagar: R$ %.2lf\n", preco * qtd);
    return 0;
}
