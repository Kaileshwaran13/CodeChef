#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, x, y, z;
    cin >> tt;
    while(tt--){
        cin >> x >> y >> z;
        if( x + y < z || x + z < y || y + z < x){
            cout << "YES" << '\n';
        }
        else{
            cout << "NO" << '\n';
        }
    }
}
