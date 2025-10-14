#include <iostream>
using namespace std;
int main() {
    int total, h, m, s;
    cout << "Digite a duracao em segundos:" << endl;
    cin >> total;
    h = total / 3600;
    m = (total % 3600) / 60;
    s = total % 60;
    cout << h << ":" << m << ":" << s << endl;
    return 0;
}
