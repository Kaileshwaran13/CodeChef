#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, x, y;
    cin >> tt;
    while(tt--){
        cin >> x >> y;
        if(x % 10 == 0){
            x /= 10;
        }else{
            x = (x / 10) + 1;
        }
        if(y % 10 == 0){
            y /= 10;
        }else{
            y = (y / 10) + 1;
        }
        cout << abs(x - y) <<'\n';
    }

}
