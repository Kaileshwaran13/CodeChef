#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, num;
    cin >>tt;
    while(tt--){
        cin >> num;
        if( num < 1600){
            cout << 3 <<'\n';
        }
        else if( num < 2000){
            cout << 2 <<'\n';
        }
        else{
            cout << 1 <<'\n';
        }
    }

}
