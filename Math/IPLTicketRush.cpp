#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int n,m;
    while(t--){
        cin >> n>> m;
        if(n-m > 0){
            cout << n- m << '\n';
        }else{
            cout << 0 << '\n';
        }
    }

}