#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int a, b, c, d;
    while(t--){
        cin >> a >> b >> c >> d;
        if( (c < a) || (d < b ) ){
            cout << "IMPOSSIBLE" << '\n';
        }else{
            cout << "POSSIBLE" << '\n';
        }
    }
}