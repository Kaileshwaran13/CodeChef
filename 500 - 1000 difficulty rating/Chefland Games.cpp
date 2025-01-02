#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, a, b, c, d;
    cin >> tt;
    while(tt--){
        cin >> a >> b >> c >> d;
        if( a == 1 || b == 1 || c == 1 || d == 1){
            cout << "OUT" << '\n';
        }
        else{
            cout << "IN" << '\n';
        }
    }

}
