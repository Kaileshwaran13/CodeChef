#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, a, b, c, d, usedMemory;
    cin >> tt;
    while(tt--){
        usedMemory = 0;
        cin >> a >> b >> c >> d;
        usedMemory = b + c;
        if(usedMemory + d <= a){
            cout << 0 <<'\n';
        }
        else if( (a - (usedMemory - b) >= d) || ( a - (usedMemory-c) >= d) ){
            cout << 1 <<'\n';
        }
        else{
            cout << 2 << '\n';
        }
    }

}
