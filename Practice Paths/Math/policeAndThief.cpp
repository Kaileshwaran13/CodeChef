#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int x, y;
    while(t--){
        cin >> x >> y;
        cout << max(x,y) - min(x,y) << '\n';
    }
}