#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;

    int a = 0;
    int b = 0;
    int c = 0;

    for(int i=1; i <= n; i++){
        if(i>=12&&i%2==0&&i%3==0&&i%12==0) {
            c++;
        } else if(i%2==0&&i%3==0){
            b++;
        } else if(i%2==0){
            a++;
        } else if(i%3==0){
            b++;
        } else if(i>=12&&i%12==0){
            c++;
        }
    }
    cout << a << ' ' << b << ' ' << c;
    return 0;
}