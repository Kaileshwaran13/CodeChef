#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int n , x;
    while(t--){
        cin >> n >> x;
        if(x % n == 0)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
}