#include <stdio.h>
int main() {
    int a, b, c, menor;
    printf("Digite tres numeros:\n");
    scanf("%d %d %d", &a, &b, &c);
    menor = a;
    if (b < menor) menor = b;
    if (c < menor) menor = c;
    printf("MENOR = %d\n", menor);
    return 0;
}
