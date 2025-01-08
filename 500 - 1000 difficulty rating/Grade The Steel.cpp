#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt;
    float x, y, z;
    cin >>tt;
    while(tt--){
        cin >> x >> y >>z;
        if( x > 50 && y < 0.7 && z > 5600){
            cout << 10 <<'\n';
        }
        else if( x > 50 && y < 0.7){
            cout << 9 <<'\n';
        }
        else if( y < 0.7 && z > 5600){
            cout << 8 <<'\n';
        }
        else if( x > 50 && z > 5600){
            cout << 7 <<'\n';
        }
        else if( x > 50 || y < 0.7 || z > 5600){
            cout << 6 <<'\n';
        }
        else{
            cout << 5 << '\n';
        }
    }

}
