#include <iostream>
using namespace std;
int main() {
    int a,b;
    int prod = 0;
    cin >> a;
    cin >> b;
    
    for(int i=1; i  <=b; i++){
       if(i%a==0){
            if(prod==0) {prod=i;}
            else {prod *= i;}
       }
    }
    cout << prod;
    
    return 0;
}