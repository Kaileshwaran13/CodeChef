#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, x, y;
    cin >>tt;
    while(tt--){
        cin >> x >> y;
        if( (x + y) % 4 < 2 || (x + y) % 4 == 0 ){
            cout << "Alice" <<'\n';
        }
        else{
            cout << "Bob" <<'\n';
        }
    }

}
