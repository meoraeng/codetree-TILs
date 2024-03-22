#include <iostream>
using namespace std;
int main() {
    int n;
    int arr[10];
    int min=10000;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    for(int i=1; i<n; i++){
        if(min>(arr[i]-arr[i-1])){
            min = arr[i]-arr[i-1];
        }
    }
    cout << min;
    return 0;
}