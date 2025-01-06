#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, x, y;
    cin >> tt;
    while(tt--){
        cin >> x >> y;
        if ( 21 - (x + y) <= 10 ){
            cout << 21 - (x + y) << '\n';
        }
        else {
            cout << -1 << '\n';
        }
    }

}
