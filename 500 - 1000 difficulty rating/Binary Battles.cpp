#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, x, y, z, count;
    cin >>tt;
    while(tt--){
        cin >> x >> y >> z;
        count = 0;
        // x /= 2;
        while(x > 2){
            x /= 2;
            count += y + z;
        }
        cout << count + y << '\n';
    }

}
