#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt;
    float a, b, c, d;
    cin >> tt;
    while(tt--){
        cin >> a >> b >> c >> d;
        a = a * a;
        b = b * b;
        c = c * c * c;
        d = d * d * d;
        if( a/c == b/d ){
            cout << "YES" << '\n';
        }
        else{
            cout << "NO" <<'\n';
        }
    }

}
