#include <stdio.h>
int main() {
    int n, a=0, b=1, temp;
    printf("Quantos elementos da Fibonacci? ");
    scanf("%d", &n);
    printf("Fibonacci: ");
    for(int i=0;i<n;i++) {
        printf("%d ", a);
        temp = a + b;
        a = b;
        b = temp;
    }
    printf("\n");
    return 0;
}
