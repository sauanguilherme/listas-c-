#include <iostream>
using namespace std;
int main(){
    int m[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0;i<3;i++) for(int j=0;j<3/2;j++){
        int tmp = m[i][j]; m[i][j]=m[i][2-j]; m[i][2-j]=tmp;
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++) cout << m[i][j] << " ";
        cout << endl;
    }
    return 0;
}
