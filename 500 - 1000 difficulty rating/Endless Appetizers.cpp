#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt;
    float x, y, z;
    cin >>tt;
    while(tt--){
        cin >>x >> y >> z;
        z = z / 30;
        x += z;
        y = ceil(x / y);
        cout << y <<'\n';
    }

}
