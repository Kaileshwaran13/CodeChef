#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, num1, num2;
    cin >> tt;
    while(tt--){
        cin >> num1 >> num2;
        if( num1 * 10 == num2 * 5){
            cout << "ANY" <<'\n';
        }
        else if (num1 *10 > num2 * 5){
            cout << "FIRST" << '\n';
        }
        else{
            cout << "SECOND" << '\n';
        }
    }

}
