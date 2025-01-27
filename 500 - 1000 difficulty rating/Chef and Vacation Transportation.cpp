#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, x, y, z;
    cin >>tt;
    while(tt--){
        cin >> x >> y >> z;
        if( x + y < z){
            cout << "PLANEBUS" << '\n';
        }
        else if(x + y == z){
            cout << "EQUAL" << '\n';
        }
        else{
            cout << "TRAIN" << '\n';
        }
    }
}
