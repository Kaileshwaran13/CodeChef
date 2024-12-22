#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, x,y, z;
    cin >> tt;
    while(tt--){
        cin >> x >> y >> z;
        if(x > z){
            cout << 0 << '\n';
        }
        else if (x + y <= z) {
            cout << 2 << '\n';
        }
        else{
            cout << 1 << '\n';
        }
    }

}
