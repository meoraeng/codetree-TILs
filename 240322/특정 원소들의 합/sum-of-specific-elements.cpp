#include <iostream>
using namespace std;
int main() {
    int a[4][4];
    int sum=0;
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cin >> a[i][j];
        }
    }
    for(int i=0; i<4; i++) {
        for(int j=0; j<=i; j++){
            sum += a[i][j];
        }
    }
    cout << sum;

    return 0;
}