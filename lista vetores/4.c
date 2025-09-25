#include <stdio.h>
int main() {
    int v[20], pares=0, impares=0;
    printf("Digite 20 numeros inteiros:\n");
    for(int i=0;i<20;i++) {
        scanf("%d", &v[i]);
        if(v[i]%2==0) pares++;
        else impares++;
    }
    printf("Pares: %d\nImpares: %d\n", pares, impares);
    return 0;
}
