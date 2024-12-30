#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, x;
    cin >> tt;
    while(tt--){
        cin >> x;
        if(x <= 3){
            cout << "BRONZE" << '\n';
        }
        else if( x <= 6){
            cout << "SILVER" << '\n';
        }
        else{
            cout << "GOLD" << '\n';
        }
    }
}
