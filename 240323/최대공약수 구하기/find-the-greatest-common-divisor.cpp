#include <iostream>
using namespace std;
int maxProd(int a, int b){
    int mod = b % a;
    if(mod==0) return a;
    int result = 0;
    while(result != 0){
        result = a % mod;
    }
    return mod;
}
int main() {
    int n,m;
    cin >> n >> m;
    cout << maxProd(n,m);
    
    return 0;
}