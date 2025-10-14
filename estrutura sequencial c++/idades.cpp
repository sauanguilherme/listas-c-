#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    string nome1, nome2;
    int idade1, idade2;
    cout << "Nome da primeira pessoa:" << endl;
    cin >> nome1;
    cout << "Idade da primeira pessoa:" << endl;
    cin >> idade1;
    cout << "Nome da segunda pessoa:" << endl;
    cin >> nome2;
    cout << "Idade da segunda pessoa:" << endl;
    cin >> idade2;
    double media = (idade1 + idade2) / 2.0;
    cout << fixed << setprecision(1);
    cout << "A idade media de " << nome1 << " e " << nome2 << " eh de " << media << " anos" << endl;
    return 0;
}
