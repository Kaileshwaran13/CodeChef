#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, a, b, c, d;
    cin >> tt;
    while(tt--){
        cin >> a >> b >> c >> d;
        if( (a + b) < (c + d) ){
            cout << a + b << '\n';
        }
        else{
            cout << c + d << '\n';
        }
        
    }
}
