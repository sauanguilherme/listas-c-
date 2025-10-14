#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double largura, comprimento, valor_m2;
    cout << "Digite a largura do terreno:" << endl;
    cin >> largura;
    cout << "Digite o comprimento do terreno:" << endl;
    cin >> comprimento;
    cout << "Digite o valor do metro quadrado:" << endl;
    cin >> valor_m2;
    double area = largura * comprimento;
    double preco = area * valor_m2;
    cout << fixed << setprecision(2);
    cout << "AREA = " << area << endl;
    cout << "PRECO = " << preco << endl;
    return 0;
}
