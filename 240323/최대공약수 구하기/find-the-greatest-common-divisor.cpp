#include <iostream>
using namespace std;
int maxProd(int a, int b){
    if(b==0) {
        return a;
    }
    else{
        return maxProd(b,a%b);
    }
}
int main() {
    int n,m;
    cin >> n >> m;
    int a,b;
    if(n>m){
        a=n;
        b=m;
    } else{
        a=m;
        b=n;
    }
    cout << maxProd(a,a%b);
    
    return 0;
}