#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, num;
    cin >> tt;
    while(tt--){
        cin >> num;
        if( num == 1){
            cout << 1 << '\n';
        }
        else if( num < 4){
            cout << num - 1 << '\n';
        }
        else{
            cout << num << '\n';
        }
    }

}
