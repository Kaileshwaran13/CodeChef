#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, x, y, z;
    cin >> tt;
    while(tt--){
        cin >> x >> y >> z;
        if(x <= 3){
            cout << x * y << '\n';
        }
        else{
            if( x % 3 == 0){
                cout << (x * y) + (( x / 3 ) * z) - z << '\n';
                
            }
            else{
                cout << (x * y) + (( x / 3 ) * z) << '\n';
            }
        }
    }

}
