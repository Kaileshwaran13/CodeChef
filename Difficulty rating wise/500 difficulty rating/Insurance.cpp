#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, x, y;
    cin >> tt;
    while(tt--){
        cin >> x >> y;
        if( x >= y){
            cout << y << '\n';
        }
        else{
            cout << x << '\n';
        }
    }
}
