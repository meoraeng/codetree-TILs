#include <iostream>
using namespace std;
int maxProd(int a, int b){
    int mod;
    int result;
    if(a>b){
        mod = a%b;
        if(mod==0) return b;
    }else if(a<b){
        mod = b%a;
        if(mod==0) return a;
    }
    for(;;){
        if(a>b){
            result = b%mod;
            if(result==0) return mod;
        }else if(a<b){
            result =  a%mod;
            if(result==0) return mod;
        }
        
    }

}
int main() {
    int n,m;
    cin >> n >> m;
    cout << maxProd(n,m);
    
    return 0;
}