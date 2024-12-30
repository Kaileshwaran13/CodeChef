#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, x, y;
    cin >> tt;
    while(tt--){
        cin >> x >> y;
        if( y - x <= 0){
            cout << 0 << '\n';
        }
        else{
            cout << y - x << '\n';
        }
    }
}
