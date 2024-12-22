#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, x, y, z, c;
    cin >> tt;
    while(tt--){
        cin >> x >> y >> z >> c;
        if( x + y >= c || y + z >= c || x + z >= c){
            cout << "YES" << '\n';
        }
        else{
            cout <<"NO" << '\n';
        }
    }
}
