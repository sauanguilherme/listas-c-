#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    char escala; double temp;
    cin >> escala >> temp;
    cout << fixed << setprecision(2);
    if (escala == 'C' || escala == 'c') {
        double f = temp * 9.0/5.0 + 32.0;
        cout << f << endl;
    } else {
        double c = 5.0 * (temp - 32.0) / 9.0;
        cout << c << endl;
    }
    return 0;
}
