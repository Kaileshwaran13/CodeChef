#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, n, k, s;
    cin >> tt;
    while(tt--){
        cin >> n >> k >> s;
        cout << (s - (n * n) ) / (k - 1) << '\n';
    }
}
