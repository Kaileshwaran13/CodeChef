#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, a, b, asc = 0 , desc = 0;
    cin >> tt;
    while(tt--){
        cin >> a >> b;
        asc = (500 - (a * 2)) + (1000 - (( a + b ) * 4));
        desc = (1000 - (b * 4)) + (500 - (( a + b ) * 2));
        cout << max(asc,desc) <<'\n';
    }

}
