#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int a, b, c, d;
    while(t--){
        cin >> a >> b >> c >> d ;    
        cout << max(a,b) + max(c,d) << '\n';
    }
}