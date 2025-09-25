#include <stdio.h>
int main() {
    int v[10], soma = 0;
    printf("Digite 10 numeros inteiros:\n");
    for(int i=0;i<10;i++) {
        scanf("%d", &v[i]);
        soma += v[i];
    }
    printf("Soma dos elementos: %d\n", soma);
    return 0;
}
