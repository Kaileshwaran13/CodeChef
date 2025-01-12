#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, num1, num2;
    cin >> tt;
    while(tt--){
        cin >> num1 >> num2;
        if( num1 % num2  == 0){
            cout << 0 << '\n';
        }
        else{
            cout << 1 << '\n';
        }
        
    }
}
