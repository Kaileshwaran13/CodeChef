#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, a, b, c, d, e;
    cin >>tt;
    while(tt--){
        cin >> a >> b >> c >> d >>e;
        if( a - b >= c + d + e){
            cout << "YES" << '\n';
        }
        else{
            cout << "NO" <<'\n';
        }
    }

}
