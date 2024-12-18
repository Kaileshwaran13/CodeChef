#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, x, y, z;
    float avg;
    cin >> tt;
    while(tt--){
        cin >> x >> y >> z;
        avg = (x + y) / 2.0;
        if(avg > z){
            cout << "YES" << '\n';
        }else{
            cout << "NO" << '\n';
        }
    }
}
