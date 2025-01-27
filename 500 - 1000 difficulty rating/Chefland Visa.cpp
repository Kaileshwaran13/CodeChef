#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, a, b, c, x, y, z;
    cin >> tt;
    while(tt--){
        cin >> a >> x >> b >> y >> c >> z;
        if( x >= a && y >= b && z <= c){
            cout << "YES" << '\n';
        }
        else{
            cout << "NO" << '\n';
        }
    }

}
