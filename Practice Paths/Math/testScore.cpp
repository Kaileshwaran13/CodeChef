#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int n, x, y, val;
    while(t--){
        cin >> n >> x >> y;
        val = 0;
        if(y == 0){
            cout << "YES" << '\n';
            continue;
        }else{
            if(x > y){
                val = x / y ;
            }else{
                val = y / x ;
            }
        }
        if(val <= n && val * x == y){
            cout << "YES" << '\n';
        }else{
            cout << "NO" << '\n';
        }
    }

}