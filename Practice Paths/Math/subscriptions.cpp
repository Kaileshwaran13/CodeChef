#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int n, x;
    float ans;
    while(t--){
        cin >> n >> x;
        ans = ceil(n/6.0);
        cout << ans * x << '\n';
    }
}