#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, x, y, z;
    cin >> tt;
    while(tt--){
        cin >> x >> y >> z;
        if( x > y + z || y > x + z || z > x + y){
            cout << "Yes" << '\n';
        }
        else{
            cout << "No" << '\n';
        }
    }
}
