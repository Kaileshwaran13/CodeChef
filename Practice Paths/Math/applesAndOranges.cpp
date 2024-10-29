#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int n, m;
    while(t--){
        cin >> n >> m;
        cout << __gcd(n,m) << '\n';
    }
}
