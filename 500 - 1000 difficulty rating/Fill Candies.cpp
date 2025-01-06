#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, x, y, z;
    cin >> tt;
    while(tt--){
        cin >> x >> y >> z;
        if ( x % ( y * z ) == 0 ){
            cout << ( x / ( y * z )) <<'\n';
        }
        else{
            cout << ( x / ( y * z )) + 1 <<'\n';
        }
    }

}
