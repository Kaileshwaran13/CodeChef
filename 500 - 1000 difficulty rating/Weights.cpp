#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, a,b, c, d;
    cin >> tt;
    while(tt--){
        cin >> a >> b >> c >> d;
        if( a == (b + c + d) || ( a == ( b + c) ) || ( a == (c + d)) || a == (b + d) || a == b ||a == c || a == d ){
            cout << "YES" <<'\n';
        }
        else{
            cout << "NO" <<'\n';
        }
    }

}
