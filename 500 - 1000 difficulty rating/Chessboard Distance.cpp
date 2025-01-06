#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, a, b, c, d;
    cin >> tt;
    while(tt--){
        cin >> a >> b >> c >> d;
        cout << max(abs(a - c),abs(b - d)) <<'\n';
    }

}
