#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt;
    float a, b, c, d;
    cin >> tt;
    while(tt--){
        cin >>a >> b >>c >>d;
        if( c / a > d / b){
            cout << 1 << '\n';
        }
        else if( c / a < d / b){
            cout << -1 << '\n';
        }
        else{
            cout << 0 << '\n';
        }
    }

}
