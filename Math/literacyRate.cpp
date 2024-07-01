#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    float l, p;
    while(t--){
        cin >> p >> l;
        if( (l/p) * 100.0 >= 75)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
}