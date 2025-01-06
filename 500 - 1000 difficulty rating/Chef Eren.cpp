#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, x, y, z;
    cin >> tt;
    while(tt--){
        cin >> x >> y >> z;
        if( x < 2 ){
            cout << z <<'\n';
        }else{
            if(x % 2 == 0){
                cout << (x/2) * y + (x/2) *z <<'\n';
            }
            else{
                cout << (x/2) * y + ((x/2)+1) *z <<'\n';
            }
        }
    }

}
