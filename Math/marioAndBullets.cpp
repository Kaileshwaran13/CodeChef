#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int x, y, z;
    while(t--){
        cin >> x >> y >> z;
        if(z - (y / x)  < 0)
            cout << 0 << '\n';
        else    
            cout << z - (y / x) << '\n';
    }
}