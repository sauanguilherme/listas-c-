#include <iostream>
using namespace std;
int somaMatriz(int m[3][3]){
    int s=0;
    for(int i=0;i<3;i++) for(int j=0;j<3;j++) s+=m[i][j];
    return s;
}
int main(){
    int m[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    cout << somaMatriz(m) << endl;
    return 0;
}
