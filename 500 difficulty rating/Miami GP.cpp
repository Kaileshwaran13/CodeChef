#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, x, y;
    cin >> tt;
    while(tt--){
        cin >> x >> y;
        if( x * 1.07 >= y){
            cout << "YES" << '\n';
        }
        else{
            cout << "NO" << '\n';
        }
    }

}