#include <iostream>
using namespace std;
int main() {
    int a,b;
    int sum =0;
    cin >> a;
    cin >> b;

    for(int i=a; i<(b+1); i++){
        if(i%5==0) {
            sum += i;
        }
    }
    if(sum !=0){
        cout << sum << ' ';
    }
    
    

    return 0;
}