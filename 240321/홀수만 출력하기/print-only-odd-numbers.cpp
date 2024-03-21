#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;

    int a[10];

    for(int i=0; i < n; i++){
        cin >> a[i];
        if(a[i]%2==1&&a[i]%3==0){
            cout << a[i] << endl;
        }
    }

    return 0;
}