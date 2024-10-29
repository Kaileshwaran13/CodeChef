#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int n, x;
    while(t--){
        cin >> n >> x;
        if( ( n * x ) % 4 != 0)
            cout << ((n * x) / 4) + 1 << '\n';
        else
            cout << (n * x) / 4 << '\n';
    }
}