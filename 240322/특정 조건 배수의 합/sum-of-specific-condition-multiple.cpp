#include <iostream>
using namespace std;
int main() {
    int a,b;
    int sum = 0;
    cin >> a;
    cin >> b;
    int c=0;
    for(int i=a; i<(b+1); i++){
        if(i%5==0) {
            c++;
            sum = sum + i;
        }
    }

    

    cout << sum;
    
    

    return 0;
}