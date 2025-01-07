#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, x, y, z, sum;
    cin >> tt;
    while(tt--){
        cin >> x >> y >> z;
        sum = x + y + z - (min(x,min(y,z)));
        cout << sum <<'\n';
    }

}
