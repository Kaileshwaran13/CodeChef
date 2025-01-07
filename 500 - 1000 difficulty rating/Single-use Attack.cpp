#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, x, y, z, count;
    cin >> tt;
    while(tt--){
        cin >> x >> y >> z;
        count = 0;
        x -= z;
        count++;
        while(x > 0){
            x -= y;
            count++;
        }
        cout << count << '\n';
    }

}
