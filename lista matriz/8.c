#include <stdio.h>
int contaOcorrencias(int matriz[4][4], int num) {
    int cont = 0;
    for(int i=0;i<4;i++) {
        for(int j=0;j<4;j++) {
            if(matriz[i][j] == num) cont++;
        }
    }
    return cont;
}
int main() {
    int matriz[4][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
    int num = 7;
    printf("O numero %d aparece %d vezes\n", num, contaOcorrencias(matriz, num));
    return 0;
}
