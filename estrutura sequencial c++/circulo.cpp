#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
    double r;
    cout << "Digite o valor do raio:" << endl;
    cin >> r;
    double area = 3.14159 * r * r;
    cout << fixed << setprecision(3);
    cout << "AREA = " << area << endl;
    return 0;
}
