#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, x, y, z;
    cin >> tt;
    while(tt--){
        cin >> x >> y >> z;
        if( (x + 1) * z >= y)
            cout << "YES" << '\n';
        else
            cout << "NO" <<'\n';
    }

}
