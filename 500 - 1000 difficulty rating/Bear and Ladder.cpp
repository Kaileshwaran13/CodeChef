#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, num1, num2;
    cin >> tt;
    while(tt--){
        cin >>num1 >> num2;
        if( (num1 == 1 && (num2 == 2 || num2) == 3) || ( num2 == 1 && (num1 == 2 || num1 == 3)) ){
            cout << "YES" <<'\n';
        }
        else if( (num1 == 2 && ( num2 == 4 || num2 == 1)) || (num2 == 2 && ( num1 == 4 || num1 == 1)) ){
            cout << "YES" << '\n';
        }
        else if( abs(num1 - num2) == 2 || abs(num1 - num2) == 1 ){
            if( (num1 % 2 != 0 && (num1 + 2 == num2 || num1 - 2 == num2 || num1 + 1 == num2)) || (num1 % 2 == 0 && (num1 + 2 == num2 || num1 - 2 == num2 || num1 - 1 == num2)) )
                cout << "YES" << '\n';
            else{
                cout << "NO" << '\n';
            }
        }
        else{
            cout << "NO" <<'\n';
        }
    }

}
