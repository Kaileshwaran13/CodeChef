#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, a, b, c;
    cin >>tt;
    while(tt--){
        cin >> a >> b >> c;
        int ans = c - (c % a);
        if( a % b == 0){
            ans = -1;
        }
        else{
            if(c % a != 0){
                ans += a;
            }
            if(ans % b == 0){
                ans += a;
            }
        }
        cout << ans <<'\n';
    }

}
