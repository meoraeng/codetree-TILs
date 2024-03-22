#include <iostream>
using namespace std;
int main() {
    int a[10];
    int three=0;
    int five=0;
    for(int i=0; i<10; i++){
        cin >> a[i];
        if(a[i]%3==0&&a[i]%5==0) {
            three++;
            five++;
        } else if(a[i]%5==0) {
            five++;
        } else if(a[i]%3==0){
            three++;
        }
    }
    
    cout << three << ' ' << five;


    return 0;
}