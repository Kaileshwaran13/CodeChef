#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, x, y, z, count;
    cin >> tt;
    while(tt--){
        cin >> x >> y >> z;
        x = abs(x - y);
        count = x / z;
        if(floor(x % z) > 0){
            count++;
        }
        cout << count << '\n';
    }

}
