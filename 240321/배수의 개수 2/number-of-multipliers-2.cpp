#include <iostream>
using namespace std;
int main() {
    int a[10];
    int cnt = 0;
    for(int i=0; i < 10; i++){
        cin >> a[i];
        if(a[i]%2==1)
            cnt++;
    }
    cout << cnt;
    return 0;
}