#include <iostream>
using namespace std;
int main(){
    int m[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int sp=0, ss=0;
    for(int i=0;i<3;i++){
        sp += m[i][i];
        ss += m[i][2-i];
    }
    cout << sp << " " << ss << endl;
    return 0;
}
