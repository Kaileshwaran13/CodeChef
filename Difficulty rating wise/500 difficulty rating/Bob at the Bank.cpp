#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, a, b, c, d;
    cin >> tt;
    while(tt--){
        cin >> a >> b >> c >> d;
        if(b > c)
            cout << (a + (abs(b - c)) * d) << '\n';
        else
            cout << (a - (abs(b - c)) * d) << '\n';
        
    }
}
