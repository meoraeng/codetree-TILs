#include <iostream>
using namespace std;
int maxProd(int a, int b){
    int mod=0;
    int result=-1;
    if(a>b){
        mod=a%b;
        if(mod==0) return b;
        result = b % mod;
        if(result==0) return mod; 
        return result;
    }else if (a<b){
        mod=b%a;
        if(mod==0) return a;
        result = a % mod;
        if(result==0) return mod; 
        return result;
    }
}
int main() {
    int n,m;
    cin >> n >> m;
    cout << maxProd(n,m);
    
    return 0;
}