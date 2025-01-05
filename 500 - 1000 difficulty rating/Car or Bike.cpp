#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, x, y;
    cin >> tt;
    while(tt--){
        cin >> x >> y;
        if( x < y){
            cout << "BIKE" << '\n';
        }
        else if( x > y){
            cout << "CAR" << '\n';
        }
        else{
            cout << "SAME" <<'\n';
        }
    }
}
