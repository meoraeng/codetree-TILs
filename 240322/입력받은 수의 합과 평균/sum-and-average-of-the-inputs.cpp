#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;
    int a[100];
    int sum=0;
    double avg;
    int cnt = 0;
    cin >> n;
    
    for(int i=0; i<n; i++){
        cin >> a[i];
        sum += a[i];
        cnt++;
    }
    avg = sum / (double)cnt;
    avg = round(avg*10);
    avg /= 10;

    cout << sum << ' ' << avg;
    

    return 0;
}