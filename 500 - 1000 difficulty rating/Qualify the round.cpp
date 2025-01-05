#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, x, a, b;
    cin >>tt;
    while(tt--){
        cin >> x >> a >> b;
        if( (a * 1) + (b * 2) >= x){
            cout << "Qualify" << '\n';
        }
        else{
            cout << "NotQualify" << '\n';
        }
    }

}
