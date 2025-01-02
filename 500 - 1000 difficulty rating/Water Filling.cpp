#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, x, y, z, count;
    cin >> tt;
    while(tt--){
        count = 0;
        cin >> x >> y >> z;
        if(x == 0){
            count++;
        }
        if(y == 0){
            count++;
        }
        if(z == 0){
            count++;
        }
        if(count >= 2){
            cout << "Water filling time" << '\n';
        }
        else{
            cout << "Not now" << '\n';
        }
    }

}
