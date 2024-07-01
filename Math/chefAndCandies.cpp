#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int n, x, val;
    while(t--){
        val = 0;
        cin >> n >> x;
        val = n - x;
        if(n > x){
            if ( val % 4 == 0)
                cout << val / 4 << '\n';
            else
                cout << (val / 4) + 1 << '\n';
        }else{
            cout << 0 << '\n';
        }
    }
}