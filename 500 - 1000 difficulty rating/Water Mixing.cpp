#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, a, b, x, y;
    cin >>tt;
    while(tt--){
        cin >> a >> b >> x >> y;
        if( (a < b && b - a <= x) || (a == b) || (a > b && (a - b) <= y )  ){
            cout << "YES" << '\n';
        }
        else{
            cout << "NO" << '\n';
        }
    }

}
