#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, a, b, c;
    cin >>tt;
    while(tt--){
        cin >> a >> b >> c;
        if( a > 50){
            cout << 'A' << '\n';
        }
        else if( b > 50){
            cout << 'B' << '\n';
        }
        else if( c > 50 ){
            cout << 'C' << '\n';
        }
        else{
            cout << "NOTA" <<'\n';
        }
    }

}
