#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    float a, b, c;
    float val = 0;
    while(t--){
        cin >> a >> b >> c;
        val = (a + b) / 2;
        if( val > c)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
}