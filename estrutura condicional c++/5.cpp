#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double preco, pago;
    int qtd;
    cin >> preco >> qtd >> pago;
    double total = preco * qtd;
    cout << fixed << setprecision(2);
    if (pago < total) {
        cout << "FALTAM " << fixed << setprecision(2) << (total - pago) << " REAIS" << endl;
    } else {
        cout << "TROCO = " << (pago - total) << endl;
    }
    return 0;
}
