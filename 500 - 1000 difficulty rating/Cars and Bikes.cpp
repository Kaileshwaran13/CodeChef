#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, num;
    cin >> tt;
    while(tt--){
        cin >> num;
        if( num % 4 == 0){
            cout << "NO" << '\n';
        }
        else{
            if(num % 4 == 2){
                cout << "YES" << '\n';
            }
        }
    }

}
