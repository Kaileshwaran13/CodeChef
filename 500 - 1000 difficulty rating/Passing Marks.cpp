#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, a, b, c, d, x, y, z;
    cin >> tt;
    while(tt--){
        cin >> a >> b >> c >> d >> x >> y >> z;
        if( a <= x && b <= y && c <= z && (x + y + z >= d)){
            cout << "YES" << '\n';
        }
        else{
            cout << "NO" << '\n';
        }
    }

}
