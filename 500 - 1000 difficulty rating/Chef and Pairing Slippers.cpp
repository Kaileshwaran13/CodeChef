#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, a, b, c;
    cin >>tt;
    while(tt--){
        cin >> a >>b >> c;
        if( b <= a / 2 ){
            cout <<b * c <<'\n';
        }
        else{
            cout << (a - b) * c <<'\n';
        }
    }

}
