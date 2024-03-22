#include <iostream>
using namespace std;
int main() {
    int a,b;
    int sum=0;
    int cnt=0;
    double avg=0;
    cin >> a;
    cin >> b;

    for(int i=a; i <= b ;i++ ){
        if(i%5==0||i%7==0)
        {    sum += i;
            cnt ++;
        }
    }
    avg = sum/(double)cnt;
    cout << fixed;
    cout.precision(1);
    cout << sum << ' ' << avg;

    return 0;
}