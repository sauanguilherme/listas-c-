#include <iostream>
using namespace std;
int main(){
    int v[10];
    int soma = 0;
    for(int i=0;i<10;i++){
        cin >> v[i];
        soma += v[i];
    }
    cout << soma << endl;
    return 0;
}
