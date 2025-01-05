#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, a, b, c, d;
    cin >>tt;
    while(tt--){
        cin >> a >> b >> c >>d;
        if( a <= c && b <= d ){
            cout << "POSSIBLE" << '\n';
        }
        else{
            cout << "IMPOSSIBLE" <<'\n';
        }
    }

}
