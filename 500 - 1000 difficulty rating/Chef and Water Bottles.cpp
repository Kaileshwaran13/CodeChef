#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, x, y, z;
    cin >> tt;
    while(tt--){
        cin >> x >> y >> z;
        if( (z / y) <= x ){
            cout << z / y <<'\n';
        }
        else if( z / y >= x){
            cout << x << '\n';
        }
        else{
            cout << 0 << '\n';
        }
    }

}
