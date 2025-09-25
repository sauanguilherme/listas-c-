#include <stdio.h>
int main() {
    int v[15], maior, menor;
    printf("Digite 15 numeros inteiros:\n");
    for(int i=0;i<15;i++) {
        scanf("%d", &v[i]);
    }
    maior = menor = v[0];
    for(int i=1;i<15;i++) {
        if(v[i] > maior) maior = v[i];
        if(v[i] < menor) menor = v[i];
    }
    printf("Maior: %d\nMenor: %d\n", maior, menor);
    return 0;
}
