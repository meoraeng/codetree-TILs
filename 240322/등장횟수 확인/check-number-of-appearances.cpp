#include <iostream>
using namespace std;
int main() {
    int a[5];
    int cnt = 0;
    for(int i=0; i<5; i++){
        cin >> a[i];
        if(a[i]%2==0){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}