#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int n,a,b;
    while(t--){
        cin >> n >> a >> b;
        cout << (180 + n) * 2 - (a + b) << '\n';
    }
}