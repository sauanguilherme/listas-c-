#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double preco, dinheiro;
    int qtd;
    cout << "Preco unitario do produto:" << endl;
    cin >> preco;
    cout << "Quantidade comprada:" << endl;
    cin >> qtd;
    cout << "Dinheiro recebido:" << endl;
    cin >> dinheiro;
    double troco = dinheiro - preco * qtd;
    cout << fixed << setprecision(2);
    cout << "TROCO = " << troco << endl;
    return 0;
}
