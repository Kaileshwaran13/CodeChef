#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int x,m,y;
    while(t--){
        cin >> x >> m >> y;
        if((x * y) < m)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
}