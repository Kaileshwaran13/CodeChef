#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, x, y, z;
    cin >> tt;
    while(tt--){
        cin >> x >> y >> z;
        x *= 10;
        if(x >= y){
            cout << y * z << '\n';
        }
        else{
            cout << (z * x) << '\n';
        }
    }
}
