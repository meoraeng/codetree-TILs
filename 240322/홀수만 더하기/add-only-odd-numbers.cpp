#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[10];
    int sum =0;
    for(int i=0; i<n; i++){
        cin >> a[i];
        if(!(a[i]%2==0)&&a[i]%3==0){
            sum += a[i];
        }
    }

    cout << sum;

    return 0;
}