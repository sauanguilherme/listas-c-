#include <iostream>
using namespace std;
int main(){
    int m[3][2]={{1,2},{3,4},{5,6}};
    int t[2][3];
    for(int i=0;i<3;i++) for(int j=0;j<2;j++) t[j][i]=m[i][j];
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++) cout << t[i][j] << " ";
        cout << endl;
    }
    return 0;
}
