#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, x, y, count;
    cin >> tt;
    while(tt--){
        count = 0;
        cin >> x >> y;
        if( x % y == 0){
            count = x / y;
        }
        else if (x % y > 0){
            count = (x / y) + (x % y);
        }
        cout << count <<'\n';
    }

}
