#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, num, val;
    cin >> tt;
    while(tt--){
        cin >> num;
        val = num % 8;
        if(val == 1){
            cout << num + 3 << "LB" << '\n';
        }
        else if(val == 2){
            cout << num + 3 << "MB" << '\n';
        }
        else if(val == 3){
            cout << num + 3 << "UB" << '\n';
        }
        else if(val == 4){
            cout << num - 3 << "LB" << '\n';
        }
        else if(val == 5){
            cout << num - 3 << "MB" << '\n';
        }
        else if(val == 6){
            cout << num - 3 << "UB" << '\n';
        }
        else if(val == 7){
            cout << num + 1 << "SU" << '\n';
        }
        else{
            cout << num - 1 << "SL" << '\n';
        }
    }
}
