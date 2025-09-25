#include <stdio.h>
int main() {
    double preco, dinheiro, troco;
    int qtd;
    printf("Preco unitario do produto:\n");
    scanf("%lf", &preco);
    printf("Quantidade comprada:\n");
    scanf("%d", &qtd);
    printf("Dinheiro recebido:\n");
    scanf("%lf", &dinheiro);
    troco = dinheiro - preco * qtd;
    if (troco < 0) {
        printf("DINHEIRO INSUFICIENTE. FALTAM %.2lf REAIS\n", -troco);
    } else {
        printf("TROCO = %.2lf\n", troco);
    }
    return 0;
}
