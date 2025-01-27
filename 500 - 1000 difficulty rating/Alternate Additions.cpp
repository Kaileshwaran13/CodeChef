#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, x, y;
    cin >> tt;
    while(tt--){
        cin >> x >> y;
        x = y - x;
        if(x % 3 == 2){
            cout << "NO" << '\n';
        }
        else{
            cout << "YES" <<'\n';
        }
    }

}
