#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, x, y, diff;
    cin >> tt;
    while(tt--){
        cin >> x >> y;
        if( x == y){
            cout << 0 <<'\n';
        }
        else if( x < y){
            cout << y - x <<'\n';
        }
        else{
            if( (x - y) % 2 == 0){
                cout << ( (x - y) /2) <<'\n'; 
            }
            else{
                cout << ( (x - y) /2) + 2 <<'\n'; 
            }
        }
    }

}
