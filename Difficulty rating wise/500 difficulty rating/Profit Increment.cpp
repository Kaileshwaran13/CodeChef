#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, x, y;
    cin >> tt;
    while(tt--){
        cin >> x >> y;
        cout << (x + ( x * 10) / 100)  - (x - y) << '\n';
    }
}
