#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, a, b, c, p, q, r;
    cin >>tt;
    while(tt--){
        cin >> a >> b >> c >> p >> q >> r;
        float needs = (p + q + r) / 2.0 ;
        if( p + b + c > needs || a + q + c > needs ||a + b + r > needs ){
            cout << "YES" <<'\n';
        }
        else{
            cout << "NO" << '\n';
        }
    }

}
