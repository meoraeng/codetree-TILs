#include <iostream>
using namespace std;
int main() {
    int a, b;
    int remainder;
    cin >> a >> b;
    int cnt[b]={0};
    for(int i=0;i<10;i++){
        remainder = a%b;
        a /= b;
        cnt[remainder] +=1;
        if(a<=1) {
            break;
        };
    }
    int sum = 0;
    for(int i=0; i<b; i++){
        if(cnt[i]!=0) {
            sum += (cnt[i]*cnt[i]);
        }
    };
    cout << sum;
    return 0;
}