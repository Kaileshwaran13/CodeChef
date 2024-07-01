#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int a,b,c;
    while(t--){
        cin >> a >> b >> c;
        if((a + b) % 2 != 0)
            cout << "YES" << '\n';
        else if( (b + c) % 2 != 0)
            cout << "YES" << '\n';
        else if( (c + a) % 2 != 0)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
}