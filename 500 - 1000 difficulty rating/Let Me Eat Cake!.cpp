#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, x, y;
    cin >> tt;
    while(tt--){
        cin >> x >> y;
        int ans = 0;
        while(x != y){
            if(x > y){
                ans += ceil(x/2.0);
                x -= ceil(x/2.0);
                
            }
            else if(y > x){
                ans += ceil(y/2.0);
                y -= ceil(y/2.0);
            }
            
        }
        cout << ans << '\n';
    }

}
