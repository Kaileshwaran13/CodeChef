#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, x, y, z;
    cin >> tt;
    while(tt--){
        cin >> x >> y >> z;
        cout << min(abs(x-y),abs(abs(x -y)-z)) <<'\n';
    }

}
