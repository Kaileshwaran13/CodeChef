#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, x, y, ans = 0;
    cin >>tt;
    while(tt--){
        cin >> x >> y;
        if(x == y){
            cout << 0 <<'\n';
        }
        else if( x + 8 > y){
            cout << 1 << '\n';
        }
        else{
            ans = y - x;
            if( ans % 8 == 0 )  {
                cout << ans / 8 <<'\n';
            }
            else{
                cout << (ans / 8) + 1<<'\n';
            }
        }
    }

}
