#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int y, x;
    float sum;
    while(t--){
        sum = 0;
        cin >> y >> x;
        sum = (y / 2.0);
        if(x >= sum)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
}