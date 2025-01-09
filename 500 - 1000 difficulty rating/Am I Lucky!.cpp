#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, x, y, z;
    cin >> tt;
    while(tt--){
        cin >> x >> y >> z;
        x = x - y;
        x %= z;
        y %= z;
        cout <<abs(x-y) << '\n';
    }

}
