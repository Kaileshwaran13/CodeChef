#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, x, y, z;
    cin >>tt;
    while(tt--){
        cin >>x >> y >>z;
        cout << (y - (x - 1)) * z <<'\n';
    }

}
