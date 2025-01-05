#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, n, x;
    cin >> tt;
    while(tt--) {
        cin >> n >> x;
        if(n > x){
            if( (n - x) % 4 == 0){
                cout << (n - x) / 4 <<'\n';
            }
            else{
                cout << (( n - x ) / 4) + 1 <<'\n';
            }
        }
        else{
            cout << 0 << '\n';
        }
    }

}
