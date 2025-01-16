#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, a, b, c;
    cin >>tt;
    while(tt--){
        cin >> a >> b >> c;
        if (b > a) {
            b -= a;
        }
        if(  b % c == 0 || ((a + 1) - b) % c == 0){
            cout <<"YES" <<'\n';
        }
        else{
            cout << "NO" <<'\n';
        }
    }

}
