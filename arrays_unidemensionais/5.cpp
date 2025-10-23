#include <iostream>
using namespace std;
int main(){
    int v[10];
    for(int i=0;i<10;i++) cin >> v[i];
    int x; cin >> x;
    bool achou=false;
    for(int i=0;i<10;i++) if(v[i]==x) achou=true;
    if(achou) cout << "Presente" << endl; else cout << "Nao encontrado" << endl;
    return 0;
}
