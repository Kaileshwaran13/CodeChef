#include<bits/stdc++.h>
using namespace std;

int main() {
    int tt, n, x, y;
    cin >> tt;
    while(tt--){
        cin >> n >> x >> y;
        if(y == 0){
            cout << "YES" << '\n';
        }
        else if(y % x == 0 && y % x <= n){
            cout << "YES" << '\n';
        }else{
            cout << "NO" << '\n';
        }
    }

}
