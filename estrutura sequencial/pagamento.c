#include <stdio.h>

int main() {
    char nome[50];
    double valor_hora;
    int horas;
    printf("Nome: ");
    scanf("%s", nome);
    printf("Valor por hora: ");
    scanf("%lf", &valor_hora);
    printf("Horas trabalhadas: ");
    scanf("%d", &horas);
    double pagamento = valor_hora * horas;
    printf("O pagamento para %s deve ser %.2lf\n", nome, pagamento);
    return 0;
}
