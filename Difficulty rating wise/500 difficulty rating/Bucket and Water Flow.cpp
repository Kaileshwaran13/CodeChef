#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, a, b, c, d;
    cin >> tt;
    while(tt--){
        cin >> a >> b >> c >> d;
        if( a + (c * d) > b){
            cout << "overFlow" << '\n';
        }
        else if( a + (c * d) == b){
            cout << "filled" << '\n';
        }
        else{
            cout << "Unfilled" << '\n';
        }
    }
}
