#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double nota1, nota2;
    cin >> nota1 >> nota2;
    double final = nota1 + nota2;
    cout << fixed << setprecision(1);
    cout << "NOTA FINAL = " << final << endl;
    if (final < 60.0) cout << "REPROVADO" << endl;
    return 0;
}
