#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int x, y, z, half = 0, val = 0;
    while(t--){
        cin >> x >> y >> z;
        half = z / 2;
        val = x * y;
        cout << half / val << '\n';
    }
}