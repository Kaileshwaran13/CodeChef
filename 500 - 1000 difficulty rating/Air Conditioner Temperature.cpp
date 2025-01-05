#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, num1, num2, num3;
    cin >> tt;
    while(tt--){
        cin >> num1 >> num2 >> num3;
        if(num2 >= num3 && num2 >= num1){
            cout << "Yes" << '\n';
        }
        else{
            cout << "No" << '\n';
        }
    }

}
