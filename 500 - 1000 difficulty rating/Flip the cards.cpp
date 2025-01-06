#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, x, y;
    cin >> tt;
    while(tt--){
        cin >> x >> y;
        if(x == y || x == 0 || y == 0){
            cout << 0 <<'\n';
        }
        else{
            cout << min(min(x,y) , max(x,y) - min(x,y)) << '\n';
        }
    }

}
