#include <iostream>
using namespace std;
int main() {
    int n;
    int cnt=0;

    cin >> n;
    for(int i=1; i<=10; i++){
        if(n<=1) {
            break;
        }else{
            n /= i;
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}