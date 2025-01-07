#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, x, y;
    cin >>tt;
    while(tt--){
        cin >>x >>y;
        if(x >= y){
            cout << 0 << '\n';
        }
        else{
            cout << (y - 1) / x <<'\n';
            
        }
    }

}
