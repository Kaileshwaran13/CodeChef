#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, x;
    cin >> tt;
    while(tt--){
        cin >> x;
        if(x / 10 > 100){
            cout << x / 10 << '\n';
        }
        else{
            cout << 100 <<'\n';
        }
    }
}
