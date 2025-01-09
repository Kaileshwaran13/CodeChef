#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, n, a, b, c, maxVal, minVal;
    cin >>tt;
    while(tt--){
        cin >> n >> a >> b >> c;
        minVal = min(a,(min(b,c)));
        maxVal = max(a,(max(b,c)));
        cout << minVal * (n - 1)  + a + b + c - minVal - maxVal << '\n';
    }
}
