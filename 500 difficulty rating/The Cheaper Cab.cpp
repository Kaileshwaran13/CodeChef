#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, x, y;
    cin >> tt;
    while(tt--){
        cin >> x >> y;
        if( x < y ){
            cout << "FIRST" << '\n';
        }
        else if( x == y){
            cout << "ANY" << '\n';
        }
        else{
            cout << "SECOND" << '\n';
        }
    }
}
