#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, x;
    cin >> tt;
    while(tt--){
        cin >> x;
        if(x <= 100){
            cout << x << '\n';
        }
        else if( x <= 1000){
            cout << x - 25 << '\n';
        }
        else if( x <= 5000 ){
            cout << x - 100 << '\n';
        }
        else{
            cout << x - 500 << '\n';
        }
    }

}
