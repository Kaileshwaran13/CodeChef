#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, a, b, x, i;
    cin >> tt;
    while(tt--){
        cin >> a >> b >> x;
        a = abs(a - b);
        if( a % ( 2 * x ) == 0){
            cout << "YES" << '\n';
        }
        else{
            cout << "NO" << '\n';
        }
    }
}
