#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, a, b, c;
    cin >> tt;
    while(tt--){
        cin >> a >> b >> c;
        if(a < b)
            cout << "Too Early" << '\n';
        else if( a > c)
            cout << "Too Late" << '\n';
        else
            cout << "Take second dose now" << '\n';
    }

}
