#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int codigo, qtd;
    cin >> codigo >> qtd;
    double preco;
    switch(codigo){
        case 1: preco = 5.00; break;
        case 2: preco = 3.50; break;
        case 3: preco = 4.80; break;
        case 4: preco = 8.90; break;
        case 5: preco = 7.32; break;
        default: preco = 0.0;
    }
    cout << fixed << setprecision(2) << (preco * qtd) << endl;
    return 0;
}
