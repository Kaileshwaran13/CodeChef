#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, x, y, z;
    cin >> tt;
    while(tt--){
        cin >> x >> y >> z;
        if( (x * y) / 2 < z){
            cout <<"YES" << '\n';
        }
        else{
            cout << "NO" << '\n';
        }
    }
    

}
