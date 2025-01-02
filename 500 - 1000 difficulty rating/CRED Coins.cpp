#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, x, y;
    cin >> tt;
    while(tt--){
        cin >> x >> y;
        if(x * y >= 100){
            cout << (x * y) / 100 << '\n';
        }
        else{
            cout << 0 << '\n';
        }
    }
    
}
