#include <stdio.h>
int main() {
    double nota1, nota2, final;
    printf("Digite as duas notas do aluno:\n");
    scanf("%lf %lf", &nota1, &nota2);
    final = nota1 + nota2;
    printf("NOTA FINAL = %.1lf\n", final);
    if (final < 60.0) {
        printf("REPROVADO\n");
    }
    return 0;
}
