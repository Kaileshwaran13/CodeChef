#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int x , n, val;
    while(t--){
        cin >> x >> n;
        val = 0;
        val = x - n;
        if(x % 2 != 0 && n % 2 == 0 )
            cout << "NO" << '\n';
        else
            cout << "YES" << '\n';
    }
}
