#include <stdio.h>
int main() {
    int v1[5], v2[5], prod=0;
    printf("Digite 5 elementos do vetor 1:\n");
    for(int i=0;i<5;i++) scanf("%d", &v1[i]);
    printf("Digite 5 elementos do vetor 2:\n");
    for(int i=0;i<5;i++) scanf("%d", &v2[i]);
    for(int i=0;i<5;i++) prod += v1[i]*v2[i];
    printf("Produto escalar: %d\n", prod);
    return 0;
}
