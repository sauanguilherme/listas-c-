#include <iostream>
using namespace std;
int contaOcorrencias(int m[4][4], int num){
    int c=0; for(int i=0;i<4;i++) for(int j=0;j<4;j++) if(m[i][j]==num) c++; return c;
}
int main(){
    int m[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    cout << contaOcorrencias(m,7) << endl;
    return 0;
}
