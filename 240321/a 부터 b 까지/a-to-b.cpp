#include <iostream>
using namespace std;
int main() {
    int a,b;
    cin >> a;
    cin >> b;

    for(int i=a; i<=b;){
        if(i>b){ 
            return 0; 
        }else{
            cout<< i << " ";
            if(i%2==1){
                i = 2*i;
            } else if(i%2==0){
                i += 3;
            }
        }
    };

    return 0;
}