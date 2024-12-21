#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, x;
    cin >> tt;
    while(tt--){
        cin >> x;
        if(x < 300){
            cout << 300 * 10 << '\n';
        }
        else{
            cout << x * 10 << '\n';
        }
    }
}
