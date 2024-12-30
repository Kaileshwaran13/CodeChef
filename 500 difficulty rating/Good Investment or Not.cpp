#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, x, y;
    cin >> tt;
    while(tt--){
        cin >> x >> y;
        if( x >= (y * 2)){
            cout << "YES" << '\n';
        }
        else{
            cout << "NO" <<'\n';
        }
    }
}
