#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, a, b, c, d;
    cin >> tt;
    while( tt-- ){
        cin >> a >> b >> c >> d;
        if( (a > ( b + c + d )) || ( b > (a + c +d) ) || ( c > (a + b + d) ) || (d > (a + b + c) ) ){
            cout << "YES" << '\n';
        }
        else{
            cout << "NO" <<'\n';
        }
    }

}
