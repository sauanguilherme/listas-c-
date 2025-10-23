#include <iostream>
using namespace std;
int main(){
    int n; cin >> n;
    long long a=0,b=1;
    for(int i=0;i<n;i++){
        cout << a << (i==n-1?"\n":" ");
        long long tmp = a + b; a = b; b = tmp;
    }
    return 0;
}
