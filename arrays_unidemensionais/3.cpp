#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double v[8];
    double soma=0;
    for(int i=0;i<8;i++){ cin >> v[i]; soma+=v[i]; }
    cout << fixed << setprecision(2) << (soma/8.0) << endl;
    return 0;
}
