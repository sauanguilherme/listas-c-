#include <stdio.h>
int main() {
    float v[8], soma = 0;
    printf("Digite 8 numeros reais:\n");
    for(int i=0;i<8;i++) {
        scanf("%f", &v[i]);
        soma += v[i];
    }
    printf("Media: %.2f\n", soma/8);
    return 0;
}
