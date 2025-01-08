#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    if( x * y > 2 * (x + y)){
        cout <<"Area" << '\n' << x * y;
    }
    else if( x * y < 2 * (x + y)){
        cout <<"Peri" << '\n' << 2 * (x + y);
    }
    else{
        cout <<"Eq" << '\n' << x * y;
    }

}
