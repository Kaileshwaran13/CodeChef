#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, n, k;
    cin >> tt;
    while(tt--){
        cin>> n >> k;
        if( n % 5 == 0 && k % 5 != 0){
            cout << (n/5) - (k/5) - 1 << '\n';
        }
        else if( n % 5 != 0 && k % 5 == 0){
            cout << (n/5) - (k/5) + 1 << '\n';
        }
        else{
            cout << (n/5) - (k/5) << '\n';
        }
               
    }
}
