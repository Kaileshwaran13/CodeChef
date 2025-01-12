#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, a, b, c, d;
    cin >> tt;
    while(tt--){
        cin >> a >> b >> c >> d;
        if( a == c && b == d || a == b && c == d || a == d && b == c){
            cout << "YES" << '\n';
        }
        else{
            cout << "NO" << '\n';
        }
    }

}
