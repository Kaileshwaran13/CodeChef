#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, num;
    cin >> tt;
    while(tt--){
        cin >> num;
        num %= 3;
        if(num == 0){
            cout << "NORMAL" << '\n';
        }
        else if(num == 1){
            cout << "HUGE" << '\n';
        }
        else{
            cout << "SMALL" <<'\n';
        }
    }

}
