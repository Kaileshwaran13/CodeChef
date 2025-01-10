#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, a, b, c, sum, exceeds, ans;
    cin >> tt;
    while(tt--){
        ans = 0;
        cin >> a >> b >> c >> sum >> exceeds;
        if( a + b <= sum && c <= exceeds){
            ans = 1;
        }
        else if( b + c <= sum && a <= exceeds){
            ans = 1;
        }
        else if( a + c <= sum && b <= exceeds){
            ans = 1;
        }
        if( ans == 1){
            cout << "YES" << '\n';
        }
        else{
            cout << "NO" << '\n';
        }
    }
}
