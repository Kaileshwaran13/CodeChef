#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, x, y;
    cin >> tt;
    while(tt--){
        cin >> x >> y;
        cout << x + (( x > y) ? (x-y):0) << '\n';
    }

}
