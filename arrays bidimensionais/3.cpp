#include <iostream>
using namespace std;
int somaLinha(int m[5][5], int linha){
    int s=0; for(int j=0;j<5;j++) s+=m[linha][j]; return s;
}
int main(){
    int m[5][5]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}};
    cout << somaLinha(m,2) << endl; // soma da linha index 2
    return 0;
}
