#include <stdio.h>
int main() {
    int v[10], busca, achou=0;
    printf("Digite 10 numeros inteiros:\n");
    for(int i=0;i<10;i++) {
        scanf("%d", &v[i]);
    }
    printf("Digite o numero para buscar:\n");
    scanf("%d", &busca);
    for(int i=0;i<10;i++) {
        if(v[i]==busca) achou=1;
    }
    if(achou) printf("Presente no vetor\n");
    else printf("Nao encontrado\n");
    return 0;
}
