#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double a,b,c;
    cin >> a >> b >> c;
    double maior = a;
    if (b > maior) maior = b;
    if (c > maior) maior = c;
    cout << fixed << setprecision(2) << maior << endl;
    return 0;
}
