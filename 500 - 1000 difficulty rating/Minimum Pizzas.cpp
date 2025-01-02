#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, x, y;
    cin >> tt;
    while(tt--){
        cin >> x >> y;
        x = x * y;
        if(x % 4 == 0){
            cout << x / 4 << '\n';
        }
        else{
            cout << (x / 4) + 1<< '\n';
        }
    }

}
