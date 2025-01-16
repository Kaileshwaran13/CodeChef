#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt;
    long long int x, y;
    cin >> tt;
    while(tt--){
        cin >> x >> y;
        if( ((x % 2 == 0) && (y % 2 == 0 )) || x % 2 == 0 && y % 2 == 1 && x != 0){
            cout << "YES" << '\n';
        }
        else{
            cout << "NO" <<'\n';
        }
    }

}
