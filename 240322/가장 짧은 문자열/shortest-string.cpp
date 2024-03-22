#include <iostream>
#include <algorithm>
#include<cstring>
using namespace std;
int main() {
    char a[20], b[20], c[20];
    cin >> a;
    cin >> b;
    cin >> c;
    int maxLen = 0;
    int minLen = 0;

    maxLen = max({strlen(a),strlen(b),strlen(c)});
    minLen = min({strlen(a),strlen(b),strlen(c)});


    cout << (maxLen - minLen);
    return 0;
}