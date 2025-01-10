#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, x, y, z;
    cin >> tt;
    while(tt--){
        cin >> x >> y >> z;
        if( y <= x ){
            cout << "PIZZA" << '\n';
        }
        else if( z <= x){
            cout << "BURGER" << '\n';
        }
        else{
            cout << "NOTHING" << '\n';
        }
    }

}
