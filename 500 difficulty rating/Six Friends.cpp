#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, x, y;
    cin >> tt;
    while(tt--){
        cin >> x >> y;
        if(x * 3 <= y * 2){
            cout << x * 3 << '\n';
        }
        else{
            cout << y * 2 << '\n';
        }
    }
}
