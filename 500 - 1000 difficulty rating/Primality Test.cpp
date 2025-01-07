#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, num, val, ans;
    cin >> tt;
    while(tt--){
        cin >> num;
        val = num - 1;
        ans = 0;
        while(val > 1){
            if(num % val == 0){
                ans = 1;
                break;
            }
            val--;
        }
        if( ans == 0 && num > 1){
            cout <<"Yes" <<'\n';
        }
        else{
            cout <<"No" <<'\n';
        }
    }

}
