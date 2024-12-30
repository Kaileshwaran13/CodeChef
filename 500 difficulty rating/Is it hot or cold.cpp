#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, x;
    cin >> tt;
    while(tt--){
        cin >> x;
        if(x > 20){
            cout << "HOT" << '\n';
        }
        else{
            cout << "COLD" << '\n';
        }
    }
}
