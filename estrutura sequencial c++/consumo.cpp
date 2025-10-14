#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double km, litros;
    cout << "Distancia percorrida (km):" << endl;
    cin >> km;
    cout << "Combustivel gasto (litros):" << endl;
    cin >> litros;
    double consumo = km / litros;
    cout << fixed << setprecision(3);
    cout << "Consumo medio = " << consumo << endl;
    return 0;
}
