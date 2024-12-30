#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, x, y;
    cin >> tt;
    while(tt--){
        cin >> x >> y;
        if( y * 30 <= x){
            cout << "YES" << '\n';
        }
        else{
            cout << "NO" << '\n';
        }
    }
}
