#include <stdio.h>

int main() {
    double preco, dinheiro;
    int quantidade;
    printf("Preco unitario do produto: ");
    scanf("%lf", &preco);
    printf("Quantidade comprada: ");
    scanf("%d", &quantidade);
    printf("Dinheiro recebido: ");
    scanf("%lf", &dinheiro);
    double total = preco * quantidade;
    double troco = dinheiro - total;
    printf("TROCO = %.2lf\n", troco);
    return 0;
}
