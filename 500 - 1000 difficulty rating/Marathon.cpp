#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, x, y, a, b, c;
    cin >>tt;
    while(tt--){
        cin >> x >>y >> a >> b >> c;
        x *= y;
        if(x < 10){
            cout << 0 <<'\n';
        }
        else if( x < 21){
            cout << a << '\n';
        }
        else if( x < 42){
            cout << b << '\n';
        }
        else{
            cout << c <<'\n';
        }
    }

}
