#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt;
    float x, y;
    cin >> tt;
    while(tt--){
        cin >> x >> y;
        if(x >= 1000){
            cout << fixed << setprecision(6) << x * y - ((x * y) * 0.10) << '\n';
        }
        else{
            cout << fixed << setprecision(6) << (x * y) << '\n';
        }
    }

}
