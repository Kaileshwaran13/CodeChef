#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, num1, num2;
    cin >> tt;
    while(tt--){
        cin >> num1 >> num2;
        if( num1 == num2 || (num2 - num1) >= num1 ){
            cout << "YES" << '\n';
        }
        else{
            cout << "NO" << '\n';
        }
    }
}
