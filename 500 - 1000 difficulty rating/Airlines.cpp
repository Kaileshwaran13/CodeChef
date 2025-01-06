#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, x, y, count;
    cin >> tt;
    while(tt--){
        cin >> x >>y;
        count = y / 100;
        if( y % 100 != 0){
            count += 1;
        }
        if(count < x){
            cout << 0 <<'\n';
        }
        else{
            cout << count - x <<'\n';
        }
    }

}
